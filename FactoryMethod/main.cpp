#include <iostream>

#include "LoggerFactory.h"
#include "CommonTool.h"

using namespace std;
using namespace FactoryMethodNS;

int main(int argc, char** argv) {
  printf("I'm Factory Method Pattern!\n");
  // begin test
  LoggerFactory* factory;
  Logger* logger;
  factory = new FileLoggerFactory();
  logger = factory->createLogger();
  logger->writeLog();
  // end test
  return 0;
}
