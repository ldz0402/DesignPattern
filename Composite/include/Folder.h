#ifndef __FOLDER_H__
#define __FOLDER_H__

#include <vector>

#include "File.h"

namespace CompositeNS {

class Folder : public File {
 public:
  std::vector<File*> files;
  std::string name;

 public:
  Folder(std::string name) { this->name = name; }

 public:
  void add(File* file) override {
    files.push_back(file);
    return;
  }

  void remove(File* file) override {
    for (auto begin = files.begin(), end = files.end(); begin != end; begin++) {
      if (*begin == file) {
        files.erase(begin);
        break;
      }
    }
    return;
  }

  File* getChild(int i) override {
    if (i >= 0 && i < files.size()) {
      return files[i];
    }
    return nullptr;
  }

  void killVirus() override {
    printf("**** 对文件夹 %s 进行杀毒\n", name.c_str());
    for (auto child : files) {
      child->killVirus();
    }
    return;
  }
};

}  // namespace CompositeNS

#endif