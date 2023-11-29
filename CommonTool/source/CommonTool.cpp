#include "CommonTool.h"

#include <cassert>
#include <fstream>
#include <iostream>

using namespace std;

namespace CommonToolNS {

string readMsgFromTxt(string file) {
  string msg = "";
  ifstream infile;
  infile.open(file.data());
  assert(infile.is_open() && "txt文件打开失败");
  string row = "";
  while (getline(infile, row)) {
    msg += row + "\n";
  }
  infile.close();
  if (msg.length() > 0) {
    msg.pop_back();
  }
  return msg;
}

void QuickSort::quickSort(int* array, int len) {
  sort(array, 0, len - 1);
  return;
}

void QuickSort::sort(int* array, int p, int r) {
  int q = 0;
  if (p < r) {
    q = partition(array, p, r);
    sort(array, p, q - 1);
    sort(array, q + 1, r);
  }
  return;
}

int QuickSort::partition(int* array, int p, int r) {
  int x = array[r];
  int j = p - 1;
  for (int i = p; i <= r - 1; ++i) {
    if (array[i] <= x) {
      j++;
      swap(array, j, i);
    }
  }
  swap(array, j + 1, r);
  return j + 1;
}

void QuickSort::swap(int* array, int i, int j) {
  int t = array[i];
  array[i] = array[j];
  array[j] = t;
  return;
}

int BinarySearch::binarySearch(int* array, int len, int key) {
  int low = 0;
  int high = len - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    int midVal = array[mid];
    if (midVal < key) {
      low = mid + 1;
    } else if (midVal > key) {
      high = mid - 1;
    } else {
      return 1;
    }
  }
  return -1;
}

void Log::print(int* array, int len) {
  printf("array: ");
  for (int i = 0; i < len; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
  return;
}

}  // namespace CommonToolNS