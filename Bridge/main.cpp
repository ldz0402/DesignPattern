#include <iostream>

#include "Image.h"

using namespace std;
using namespace BridgeNS;

int main(int argc, char** argv) {
  printf("I'm Bridge Pattern!\n");
  // begin test
  ImageImp* imp = new WindowsImp();

  Image* img = new JPGImage();
  img->setImageImp(imp);
  img->parseFile("xxx");

  imp = new LinuxImp();
  img->setImageImp(imp);
  img->parseFile("yyy");

  // end test
  return 0;
}
