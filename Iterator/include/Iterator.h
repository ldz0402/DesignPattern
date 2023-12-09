#ifndef __ITERATOR_H__
#define __ITERATOR_H__

#include "Object.h"

namespace IteratorNS {
/**
 * @brief 抽象迭代器
 *
 */
class AbstractIterator {
 public:
  virtual bool isFirst() = 0;
  virtual bool isLast() = 0;
  virtual void previous() = 0;
  virtual void next() = 0;
  virtual Object* getNextItem() = 0;
  virtual Object* getPreviousItem() = 0;
};

}  // namespace IteratorNS

#endif