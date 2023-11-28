#include "TaskManager.h"

namespace SingleTonNS {

TaskManager* TaskManager::tm = nullptr;

void TaskManager::displayProcesses() {
  printf("显示进程……\n");
  return;
}
void TaskManager::displayServices() {
  printf("显示服务……\n");
  return;
}

TaskManager* TaskManager::getInstance() {
  if (tm == nullptr) {
    tm = new TaskManager();
  }
  return tm;
}

}  // namespace SingleTonNS