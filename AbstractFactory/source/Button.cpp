#include "Button.h"

#include <iostream>

namespace AbstractFactoryNS {
void SpringButton::display() {
  printf("显示浅绿色按钮\n");
  return;
}

void SummerButton::display() {
  printf("显示浅蓝色按钮\n");
  return;
}

}  // namespace AbstractFactoryNS