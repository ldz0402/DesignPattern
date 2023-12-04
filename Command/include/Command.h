#ifndef __COMMAND_H__
#define __COMMAND_H__

#include "Handler.h"

namespace CommandNS {

/**
 * @brief 抽象命令类
 *
 */
class Command {
 public:
  virtual void execute() = 0;
};

/**
 * @brief 帮助命令类：具体命令类
 *
 */
class HelpCommand : public Command {
 private:
  HelpHandler* helpHandler;

 public:
  HelpCommand() { helpHandler = new HelpHandler(); }

 public:
  void execute() override {
    helpHandler->display();
    return;
  }
};

/**
 * @brief 最小化命令类：具体命令类
 *
 */
class MinimizeCommand : public Command {
 private:
  WindowHandler* helpHandler;

 public:
  MinimizeCommand() { helpHandler = new WindowHandler(); }

 public:
  void execute() override {
    helpHandler->minimize();
    return;
  }
};

}  // namespace CommandNS

#endif