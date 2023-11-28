#include "TextField.h"

#include <iostream>

namespace AbstractFactoryNS {
void SpringTextField::display() {
  printf("显示绿色边框文本框\n");
  return;
}

void SummerTextField::display() {
  printf("显示蓝色边框文本框\n");
  return;
}

}  // namespace AbstractFactoryNS