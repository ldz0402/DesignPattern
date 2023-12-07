#include <iostream>

#include "InstructionHandler.h"

using namespace std;
using namespace InterpreterNS;

int main(int argc, char** argv) {
  printf("I'm Interpreter Pattern!\n");
  // begin test
  string instruction = "up move 5 and down run 10 and left move 1";
  InstructionHandler handler;
  handler.handle(instruction);
  printf("%s\n", handler.output().c_str());
  // end test
  return 0;
}
