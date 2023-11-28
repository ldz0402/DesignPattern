#ifndef __LOGGER_FACTORY_H__
#define __LOGGER_FACTORY_H__

#include "Logger.h"

namespace FactoryMethodNS {
/**
 * @brief 日志记录器工厂接口
 * 
 */
class LoggerFactory {
 public:
  virtual Logger* createLogger() = 0;
};

/**
 * @brief 数据库日志记录器工厂类
 * 
 */
class DatabaseLoggerFactory : public LoggerFactory {
 public:
  Logger* createLogger() override;
};

/**
 * @brief 文件日志记录器工厂类
 * 
 */
class FileLoggerFactory : public LoggerFactory {
 public:
  Logger* createLogger() override;
};
}  // namespace FactoryMethodNS

#endif