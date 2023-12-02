#include <iostream>

#include "Decorator.h"

using namespace std;
using namespace DecoratorNS;

int main(int argc, char** argv) {
  printf("I'm Decorator Pattern!\n");
  // begin test
  Component *component, *componentSB;
  component = new Window();

  componentSB = new ScrollBarDecorator(component);
  // 一层修饰
  componentSB->display();

  Component* componentSBB = new BlackBorderDecorator(componentSB);
  // 两层修饰
  componentSBB->display();
  // end test
  return 0;
}
