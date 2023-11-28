#ifndef __LOGGER_H__
#define __LOGGER_H__

namespace FactoryMethodNS {
/**
 * @brief 日志记录接口
 *
 */
class Logger {
 public:
  virtual void writeLog() = 0;
};

/**
 * @brief 数据库日志记录器
 *
 */
class DatabaseLogger : public Logger {
 public:
  void writeLog() override;
};

/**
 * @brief 文件日志记录器
 *
 */
class FileLogger : public Logger {
 public:
  void writeLog() override;
};

}  // namespace FactoryMethodNS

#endif