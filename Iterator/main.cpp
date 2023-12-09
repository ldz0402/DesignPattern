#include <iostream>

#include "ObjectList.h"

using namespace std;
using namespace IteratorNS;

int main(int argc, char** argv) {
  printf("I'm Iterator Pattern!\n");
  // begin test
  vector<Object*> objs;
  objs.push_back(new StringObj("1"));
  objs.push_back(new StringObj("2"));
  objs.push_back(new StringObj("3"));
  objs.push_back(new StringObj("4"));

  AbstractObjectList* list = new ProductList(objs);
  AbstractIterator* itor = list->createIterator();

  printf("正向遍历：\n");
  while (!itor->isLast()) {
    itor->getNextItem()->display();
    itor->next();
  }

  printf("逆向遍历：\n");
  while (!itor->isFirst()) {
    itor->getPreviousItem()->display();
    itor->previous();
  }

  // end test
  return 0;
}