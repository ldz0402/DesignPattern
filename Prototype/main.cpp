#include <iostream>

#include "CommonTool.h"
#include "WeeklyLog.h"

using namespace std;
using namespace PrototypeNS;

int main(int argc, char** argv) {
  printf("I'm Prototype Pattern!\n");
  // begin test
  printf("--------------------------\n");
  WeeklyLog* weeklyLog = new WeeklyLog();
  weeklyLog->setName("张无忌");
  weeklyLog->setDate("冰火岛第一周");
  weeklyLog->setContent("本周练功很忙");
  weeklyLog->display();

  printf("--------------------------\n");

  WeeklyLog* newWeeklyLog = weeklyLog->clone();
  newWeeklyLog->setDate("冰火岛第二周");
  newWeeklyLog->display();
  // end test
  return 0;
}
