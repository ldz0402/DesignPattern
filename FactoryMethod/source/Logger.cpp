#include "Logger.h"

#include <iostream>

namespace FactoryMethodNS {
void DatabaseLogger::writeLog() {
  printf("数据库日志记录\n");
  return;
}

void FileLogger::writeLog() {
  printf("文件日志记录\n");
  return;
}
}  // namespace FactoryMethodNS