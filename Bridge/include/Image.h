#ifndef __IMAGE_H__
#define __IMAGE_H__

#include <string>

#include "ImageImp.h"

namespace BridgeNS {

/**
 * @brief 图像接口
 *
 */
class Image {
 protected:
  ImageImp* imp;

 public:
  void setImageImp(ImageImp* imp) {
    this->imp = imp;
    return;
  }

  virtual void parseFile(std::string fileName) = 0;
};

/**
 * @brief JPG格式图像
 *
 */
class JPGImage : public Image {
 public:
  void parseFile(std::string fileName) override;
};

/**
 * @brief PNG格式图像
 *
 */
class PNGImage : public Image {
 public:
  void parseFile(std::string fileName) override;
};

/**
 * @brief BMP格式图像
 *
 */
class BMPImage : public Image {
 public:
  void parseFile(std::string fileName) override;
};

/**
 * @brief GIF格式图像
 *
 */
class GIFImage : public Image {
 public:
  void parseFile(std::string fileName) override;
};

}  // namespace BridgeNS

#endif