#ifndef __FACADE_H__
#define __FACADE_H__

#include <string>

namespace FacadeNS {

class FileReader {
 public:
  std::string read(std::string fileName);
};

class CipherMachine {
 public:
  std::string encypt(std::string plainText);
};

class FileWriter {
 public:
  void write(std::string fileName, std::string encyptStr);
};

class EncyptFacade {
 private:
  FileReader* reader = nullptr;
  FileWriter* writer = nullptr;
  CipherMachine* cipher = nullptr;

 public:
  EncyptFacade() {
    reader = new FileReader();
    writer = new FileWriter();
    cipher = new CipherMachine();
  }

 public:
  void encyptFile(std::string fileNameSrc, std::string fileNameDes) {
    std::string plainStr = reader->read(fileNameSrc);
    std::string encyptStr = cipher->encypt(plainStr);
    writer->write(fileNameDes, encyptStr);
    return;
  }
};

}  // namespace FacadeNS

#endif