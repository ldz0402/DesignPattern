#ifndef __COMMON_TOOL_H__
#define __COMMON_TOOL_H__

#include <string>

namespace CommonToolNS {

std::string readMsgFromTxt(std::string filepath);

void writeMsgToTxt(std::string filepath, std::string msg);

class QuickSort {
 public:
  /**
   * @brief 快速排序
   *
   * @param array
   * @param len
   */
  void quickSort(int* array, int len);

 private:
  void sort(int* array, int p, int r);
  int partition(int* array, int p, int r);
  void swap(int* array, int i, int j);
};

class BinarySearch {
 public:
  /**
   * @brief 二分查找
   *
   * @param array
   * @param len
   * @param key
   * @return int
   */
  int binarySearch(int* array, int len, int key);
};

class Log {
 public:
  static void print(int* array, int len);
};

}  // namespace CommonToolNS

#endif