#ifndef __FILE_H__
#define __FILE_H__

#include <string>

namespace CompositeNS {

/**
 * @brief 文件/文件夹接口
 *
 */
class File {
 public:
  virtual void add(File*) = 0;
  virtual void remove(File*) = 0;
  virtual File* getChild(int) = 0;
  virtual void killVirus() = 0;
};

class ImageFile : public File {
 public:
  std::string name;

 public:
  ImageFile(std::string name) { this->name = name; }

 public:
  void add(File*) override { return; }
  void remove(File*) override { return; }
  File* getChild(int) override { return nullptr; }
  void killVirus() {
    printf("---- 对图像文件 %s 进行杀毒\n", name.c_str());
    return;
  }
};

class TextFile : public File {
 public:
  std::string name;

 public:
  TextFile(std::string name) { this->name = name; }

 public:
  void add(File*) override { return; }
  void remove(File*) override { return; }
  File* getChild(int) override { return nullptr; }
  void killVirus() {
    printf("---- 对文本文件 %s 进行杀毒\n", name.c_str());
    return;
  }
};

class VideoFile : public File {
 public:
  std::string name;

 public:
  VideoFile(std::string name) { this->name = name; }

 public:
  void add(File*) override { return; }
  void remove(File*) override { return; }
  File* getChild(int) override { return nullptr; }
  void killVirus() {
    printf("---- 对视频文件 %s 进行杀毒\n", name.c_str());
    return;
  }
};

}  // namespace CompositeNS

#endif