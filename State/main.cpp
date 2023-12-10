#include <iostream>

#include "Account.h"

using namespace std;
using namespace StateNS;

int main(int argc, char** argv) {
  printf("I'm State Pattern!\n");
  printf("+++++++++++++++++\n");
  // begin test
  Account* acc = new Account("x", 0);
  acc->deposit(1000);
  acc->withdraw(2000);
  acc->deposit(3000);
  acc->withdraw(5000);
  acc->withdraw(1000);
  acc->computeInterest();
  // end test
  return 0;
}