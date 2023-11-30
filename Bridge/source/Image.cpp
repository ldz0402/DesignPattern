#include "Image.h"

namespace BridgeNS {

void JPGImage::parseFile(std::string fileName) {
  Matrix* m = new Matrix();
  imp->doPaint(m);
  printf("%s, 格式为JPG\n", fileName.c_str());
  return;
}

void PNGImage::parseFile(std::string fileName) {
  Matrix* m = new Matrix();
  imp->doPaint(m);
  printf("%s, 格式为PNG\n", fileName.c_str());
  return;
}

void BMPImage::parseFile(std::string fileName) {
  Matrix* m = new Matrix();
  imp->doPaint(m);
  printf("%s, 格式为BMP\n", fileName.c_str());
  return;
}

void GIFImage::parseFile(std::string fileName) {
  Matrix* m = new Matrix();
  imp->doPaint(m);
  printf("%s, 格式为GIF\n", fileName.c_str());
  return;
}

}  // namespace BridgeNS