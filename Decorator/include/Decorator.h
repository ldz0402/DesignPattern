#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "Component.h"

namespace DecoratorNS {

/**
 * @brief 装饰类接口
 *
 */
class ComponentDecorator : public Component {
 public:
  Component* component;

 public:
  ComponentDecorator(Component* component) { this->component = component; }

 public:
  void display() override {
    component->display();
    return;
  }
};

class ScrollBarDecorator : public ComponentDecorator {
 public:
  ScrollBarDecorator(Component* component) : ComponentDecorator(component) {}

 public:
  void display() override {
    this->setScrollBar();
    this->component->display();
    return;
  }

  void setScrollBar() {
    printf("为构件增加滚动条\n");
    return;
  }
};

class BlackBorderDecorator : public ComponentDecorator {
 public:
  BlackBorderDecorator(Component* component) : ComponentDecorator(component) {}

 public:
  void display() override {
    this->setBlackBorder();
    this->component->display();
    return;
  }

  void setBlackBorder() {
    printf("为构件增加黑色边框\n");
    return;
  }
};

}  // namespace DecoratorNS

#endif