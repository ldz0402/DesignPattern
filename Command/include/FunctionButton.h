#ifndef __FUNCTIONBUTTON_H__
#define __FUNCTIONBUTTON_H__

#include <string>
#include <vector>

#include "Command.h"

namespace CommandNS {

/**
 * @brief 功能键类：请求发送者
 *
 */
class FunctionButton {
 private:
  std::string name;
  Command* command;

 public:
  FunctionButton(std::string name) : name(name) {}

  std::string getName() { return name; }

  void setCommand(Command* command) {
    this->command = command;
    return;
  }

  void onClick() {
    printf("点击功能键\n");
    command->execute();
    return;
  }
};

class FBSettingWindow {
 private:
  std::string title;
  std::vector<FunctionButton*> functionButtons;

 public:
  FBSettingWindow(std::string title) { this->title = title; }

 public:
  void setTitle(std::string title) {
    this->title = title;
    return;
  }

  std::string getTitle() { return this->title; }

  void addFunctionButton(FunctionButton* fb) {
    functionButtons.push_back(fb);
    return;
  }

  void removeFunctionButton(FunctionButton* fb) {
    auto begin = functionButtons.begin();
    auto end = functionButtons.end();
    while (begin != end) {
      if (*begin == fb) {
        functionButtons.erase(begin);
        break;
      }
      begin++;
    }
    return;
  }

  void display() {
    printf("显示窗口：%s\n", this->title.c_str());
    printf("显示功能键：");
    for (auto fb : functionButtons) {
      printf("%s ", fb->getName().c_str());
    }
    printf("\n");
    return;
  }
};

}  // namespace CommandNS

#endif