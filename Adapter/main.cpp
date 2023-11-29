#include <iostream>

#include "ScoreOperation.h"

using namespace std;
using namespace AdapterNS;
using namespace CommonToolNS;

int main(int argc, char** argv) {
  printf("I'm Adapter Pattern!\n");
  // begin test
  int scores[] = {34, 54, 23, 100, 66, 23, 76, 89, 98};
  ScoreOperation* scoreOperation = new OperationAdapter();

  scoreOperation->sort(scores, 9);

  Log::print(scores, 9);

  printf("查找成绩为98的学生：");
  if (scoreOperation->search(scores, 9, 98) == 1) {
    printf("找到\n");
  } else {
    printf("未找到\n");
  }

  printf("查找成绩为99的学生：");
  if (scoreOperation->search(scores, 9, 99) == 1) {
    printf("找到\n");
  } else {
    printf("未找到\n");
  }
  // end test
  return 0;
}
