#include <iostream>

#include "Folder.h"

using namespace std;
using namespace CompositeNS;

int main(int argc, char **argv) {
  printf("I'm Composite Pattern!\n");
  // begin test
  File *file1, *file2, *file3, *file4, *file5;
  Folder *folder1, *folder2, *folder3, *folder4;

  folder1 = new Folder("xxx的资料");
  folder2 = new Folder("图像文件");
  folder3 = new Folder("文本文件");
  folder4 = new Folder("视频文件");

  file1 = new ImageFile("xxx.jpg");
  file2 = new ImageFile("yyy.png");
  file3 = new TextFile("zzz.txt");
  file4 = new TextFile("xyz.doc");
  file5 = new VideoFile("hhh.mp4");

  folder2->add(file1);
  folder2->add(file2);

  folder3->add(file3);
  folder3->add(file4);

  folder4->add(file5);

  folder1->add(folder2);
  folder1->add(folder3);
  folder1->add(folder4);

  folder1->killVirus();

  // end test
  return 0;
}
