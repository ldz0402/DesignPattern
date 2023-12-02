#ifndef __COMPONENT_H__
#define __COMPONENT_H__

#include <iostream>

namespace DecoratorNS {

/**
 * @brief 抽象构建类
 *
 */
class Component {
 public:
  virtual void display() = 0;
};

/**
 * @brief 窗体类
 *
 */
class Window : public Component {
 public:
  void display() override {
    printf("显示窗体\n");
    return;
  }
};

class TextBox : public Component {
 public:
  void display() override {
    printf("显示文本框\n");
    return;
  }
};

class ListBox : public Component {
 public:
  void display() override {
    printf("显示列表框\n");
    return;
  }
};

}  // namespace DecoratorNS

#endif