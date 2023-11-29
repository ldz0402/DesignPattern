#include "ScoreOperation.h"

namespace AdapterNS {
void OperationAdapter::sort(int* array, int len) {
  sortObj->quickSort(array, len);
  return;
}

int OperationAdapter::search(int* array, int len, int key) {
  int flag = searchObj->binarySearch(array, len, key);
  return flag;
}
}  // namespace AdapterNS