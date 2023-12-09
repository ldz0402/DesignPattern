#include <iostream>

#include "Observer.h"

using namespace std;
using namespace ObserverNS;

int main(int argc, char** argv) {
  printf("I'm Observer Pattern!\n");
  // begin test
  AllControlCenter* center = new ConcreteAllControlCenter("math");

  Observer *x, *y, *z;
  x = new Player("x");
  y = new Player("y");
  z = new Player("z");

  center->join(x);
  center->join(y);
  center->join(z);

  x->beAttacked(center);

  center->quit(x);

  // end test
  return 0;
}