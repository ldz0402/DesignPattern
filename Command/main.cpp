#include <iostream>

#include "FunctionButton.h"

using namespace std;
using namespace CommandNS;

int main(int argc, char** argv) {
  printf("I'm Command Pattern!\n");
  // begin test
  FBSettingWindow* fbsw = new FBSettingWindow("功能键设置");

  FunctionButton *fb1, *fb2;
  fb1 = new FunctionButton("功能键1");
  fb2 = new FunctionButton("功能键2");

  Command *command1, *command2;
  command1 = new HelpCommand();
  command2 = new MinimizeCommand();

  fb1->setCommand(command1);
  fb2->setCommand(command2);

  fbsw->addFunctionButton(fb1);
  fbsw->addFunctionButton(fb2);
  fbsw->display();

  fb1->onClick();
  fb2->onClick();

  // end test
  return 0;
}
