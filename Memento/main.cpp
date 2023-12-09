#include <iostream>

#include "Memento.h"

using namespace std;
using namespace MementoNS;

void display(Chessman* chess) {
  printf("棋子：%s，当前在第%d行，第%d列\n", chess->getLabel().c_str(),
         chess->getX(), chess->getY());
  return;
}

int main(int argc, char** argv) {
  printf("I'm Memento Pattern!\n");
  // begin test
  MementoCareTaker* mc = new MementoCareTaker();
  Chessman* chess = new Chessman("车", 1, 1);
  display(chess);
  mc->setMemento(chess->save());
  chess->setX(2);
  display(chess);
  mc->setMemento(chess->save());
  chess->setY(5);
  display(chess);
  printf("想悔棋……\n");
  chess->restore(mc->getMemento());
  display(chess);

  // end test
  return 0;
}