#include "LoggerFactory.h"

namespace FactoryMethodNS {
Logger* DatabaseLoggerFactory::createLogger() {
  // 连接数据库，代码省略
  Logger* logger = new DatabaseLogger();
  // 初始化数据库日志记录器，代码省略
  return logger;
}

Logger* FileLoggerFactory::createLogger() {
  Logger* logger = new FileLogger();
  // 创建文件，代码省略
  return logger;
}

}  // namespace FactoryMethodNS