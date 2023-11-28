#include "ComboBox.h"

#include <iostream>

namespace AbstractFactoryNS {
void SpringComboBox::display() {
  printf("显示绿色边框组合框\n");
  return;
}

void SummerComboBox::display() {
  printf("显示蓝色边框组合框\n");
  return;
}

}  // namespace AbstractFactoryNS