#include <iostream>

#include "Facade.h"

using namespace std;
using namespace FacadeNS;

int main(int argc, char** argv) {
  printf("I'm Facade Pattern!\n");
  // begin test
  EncyptFacade* facade = new EncyptFacade();
  facade->encyptFile("../input/msg.txt", "../output/output.txt");

  // end test
  return 0;
}
