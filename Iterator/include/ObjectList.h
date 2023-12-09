#ifndef __OBJECTLIST_H__
#define __OBJECTLIST_H__

#include <vector>

#include "Iterator.h"

namespace IteratorNS {

/**
 * @brief 抽象聚合类
 *
 */
class AbstractObjectList {
 protected:
  std::vector<Object*> objects;

 public:
  AbstractObjectList(std::vector<Object*> objects) { this->objects = objects; }

 public:
  void addObject(Object* obj) {
    objects.push_back(obj);
    return;
  }

  void removeObject(Object* obj) {
    auto begin = objects.begin();
    auto end = objects.end();
    while (begin != end) {
      if (*begin == obj) {
        break;
      }
      begin++;
    }
    if (begin != end) {
      objects.erase(begin);
    }
    return;
  }

  std::vector<Object*> getObjects() { return objects; }

  virtual AbstractIterator* createIterator() = 0;
};

/**
 * @brief 商品数据类：具体聚合类
 *
 */
class ProductList : public AbstractObjectList {
 public:
  ProductList(std::vector<Object*> objects) : AbstractObjectList(objects) {}

  AbstractIterator* createIterator();
};

class ProductIterator : public AbstractIterator {
 private:
  ProductList* productList;
  std::vector<Object*> products;
  int cursor1;
  int cursor2;

 public:
  ProductIterator(ProductList* list) {
    this->productList = list;
    this->products = list->getObjects();
    cursor1 = 0;
    cursor2 = products.size() - 1;
  }

  void next() override {
    if (cursor1 < products.size()) {
      cursor1++;
    }
    return;
  }

  bool isLast() override { return cursor1 == products.size(); }

  void previous() override {
    if (cursor2 > -1) {
      cursor2--;
    }
  }

  bool isFirst() override { return cursor2 == -1; }

  Object* getNextItem() override { return products[cursor1]; }

  Object* getPreviousItem() override { return products[cursor2]; }
};

}  // namespace IteratorNS

#endif