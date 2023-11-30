#include "ImageImp.h"

#include <iostream>

namespace BridgeNS {

void WindowsImp::doPaint(Matrix* m) {
  printf("在Windows操作系统中显示图像\n");
  return;
}

void LinuxImp::doPaint(Matrix* m) {
  printf("在Linux操作系统中显示图像\n");
  return;
}

void UNIXImp::doPaint(Matrix* m) {
  printf("在UNIX操作系统中显示图像\n");
  return;
}

}  // namespace BridgeNS