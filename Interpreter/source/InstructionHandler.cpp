#include "InstructionHandler.h"

#include <stack>
#include <vector>

using namespace std;

namespace InterpreterNS {

vector<string> split(string str, char ch) {
  vector<string> ret;
  string word = "";
  unsigned len = str.length();
  for (int i = 0; i < len; ++i) {
    if (str[i] == ch) {
      if (word.length() > 0) {
        ret.push_back(word);
        word = "";
      }
      continue;
    }
    word += str[i];
  }
  if (word.length() > 0) {
    ret.push_back(word);
    word = "";
  }
  return ret;
}

void InstructionHandler::handle(std::string instruction) {
  AbstractNode *left = nullptr, *right = nullptr;
  AbstractNode *direction = nullptr, *action = nullptr, *distance = nullptr;

  stack<AbstractNode *> sta;
  vector<string> words = split(instruction, ' ');

  for (int i = 0; i < words.size();) {
    if ("and" == words[i]) {
      left = sta.top();
      sta.pop();
      string word1 = words[++i];
      direction = new DirectionNode(word1);
      string word2 = words[++i];
      action = new ActionNode(word2);
      string word3 = words[++i];
      distance = new DistanceNode(word3);
      right = new SentenceNode(direction, action, distance);
      sta.push(new AndNode(left, right));
      ++i;
    } else {
      string word1 = words[i++];
      direction = new DirectionNode(word1);
      string word2 = words[i++];
      action = new ActionNode(word2);
      string word3 = words[i++];
      distance = new DistanceNode(word3);
      left = new SentenceNode(direction, action, distance);
      sta.push(left);
    }
  }
  this->node = sta.top();
  sta.pop();
  return;
}
}  // namespace InterpreterNS