#include "ObjectList.h"

namespace IteratorNS {
AbstractIterator* ProductList::createIterator() {
  return new ProductIterator(this);
}
}  // namespace IteratorNS