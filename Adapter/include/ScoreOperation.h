#ifndef __SCOREOPERATION_H__
#define __SCOREOPERATION_H__

#include "CommonTool.h"

namespace AdapterNS {
/**
 * @brief 成绩操作接口
 *
 */
class ScoreOperation {
 public:
  virtual void sort(int* array, int len) = 0;
  virtual int search(int* array, int len, int key) = 0;
};

/**
 * @brief 成绩操作适配器
 *
 */
class OperationAdapter : public ScoreOperation {
 private:
  CommonToolNS::QuickSort* sortObj;
  CommonToolNS::BinarySearch* searchObj;

 public:
  OperationAdapter() {
    sortObj = new CommonToolNS::QuickSort();
    searchObj = new CommonToolNS::BinarySearch();
  }

 public:
  void sort(int* array, int len) override;
  int search(int* array, int len, int key) override;
};
}  // namespace AdapterNS

#endif