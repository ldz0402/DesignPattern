#include <iostream>

#include "TaskManager.h"

using namespace std;

int main(int argc, char** argv) {
  printf("I'm Singleton Pattern!\n");
  // begin test
  SingleTonNS::TaskManager* tm = SingleTonNS::TaskManager::getInstance();
  tm->displayProcesses();
  tm->displayServices();
  // end test
  return 0;
}