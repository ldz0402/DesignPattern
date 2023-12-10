#include <iostream>

#include "TemplateMethod.h"

using namespace std;
using namespace TemplateMethodNS;

int main(int argc, char** argv) {
  printf("I'm TemplateMethod Pattern!\n");
  printf("+++++++++++++++++\n");
  // begin test
  Account* account = new CurrentAccount();
  account->handle("x", "123456");
  // end test
  return 0;
}