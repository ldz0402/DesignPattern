#include <iostream>

#include "IgoChessmanFactory.h"

using namespace std;
using namespace FlyweightNS;

int main(int argc, char** argv) {
  printf("I'm Flyweight Pattern!\n");
  // begin test
  IgoChessmanFactory* factory = IgoChessmanFactory::getInstance();

  IgoChessman *black1, *black2, *black3;
  IgoChessman *white1, *white2;

  black1 = factory->getIgoChessman("b");
  black2 = factory->getIgoChessman("b");
  black3 = factory->getIgoChessman("b");
  printf("判断两颗黑子是否相同：");
  if (black1 == black2) {
    printf("相同\n");
  } else {
    printf("不相同\n");
  }

  white1 = factory->getIgoChessman("w");
  white2 = factory->getIgoChessman("w");
  printf("判断两颗白子是否相同：");
  if (white1 == white2) {
    printf("相同\n");
  } else {
    printf("不相同\n");
  }

  black1->display();
  black2->display();
  black3->display();

  white1->display();
  white2->display();

  // end test
  return 0;
}
