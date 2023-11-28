#include "CommonTool.h"

#include <cassert>
#include <fstream>
#include <iostream>

using namespace std;

namespace CommonToolNS {

string readMsgFromTxt(string file) {
  string msg = "";
  ifstream infile;
  infile.open(file.data());
  assert(infile.is_open() && "txt文件打开失败");
  string row = "";
  while (getline(infile, row)) {
    msg += row + "\n";
  }
  infile.close();
  if (msg.length() > 0) {
    msg.pop_back();
  }
  return msg;
}

}  // namespace CommonToolNS