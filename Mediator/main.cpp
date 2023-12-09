#include <iostream>

#include "Mediator.h"

using namespace std;
using namespace MediatorNS;

int main(int argc, char** argv) {
  printf("I'm Mediator Pattern!\n");
  // begin test
  ConcreteMediator* cm = new ConcreteMediator();

  Button* bt = new Button();
  List* list = new List();
  TextBox* tb = new TextBox();
  ComboBox* cb = new ComboBox();

  bt->setMediator(cm);
  list->setMediator(cm);
  tb->setMediator(cm);
  cb->setMediator(cm);

  cm->button = bt;
  cm->list = list;
  cm->cb = cb;
  cm->tb = tb;

  bt->changed();
  list->changed();

  // end test
  return 0;
}