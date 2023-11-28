#ifndef __TASK_MANAGER_H__
#define __TASK_MANAGER_H__

#include <iostream>

namespace SingleTonNS {
class TaskManager {
 private:
  /**
   * @brief 初始化窗口
   *
   */
  TaskManager() {}

 public:
  /**
   * @brief 显示进程
   *
   */
  void displayProcesses();

  /**
   * @brief 显示服务
   *
   */
  void displayServices();

 private:
  static TaskManager* tm;

 public:
  static TaskManager* getInstance();
};
}  // namespace SingleTonNS

#endif