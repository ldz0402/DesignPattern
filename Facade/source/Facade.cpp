#include "Facade.h"

#include "CommonTool.h"

using namespace std;

namespace FacadeNS {
string FileReader::read(string fileName) {
  string msg = "";
  printf("读取文件数据\n");
  msg = CommonToolNS::readMsgFromTxt(fileName);
  return msg;
}

string CipherMachine::encypt(string plainText) {
  string es = "";
  printf("开始加密文件数据\n");
  int length = plainText.length();
  for (int i = 0; i < length; ++i) {
    char ch = plainText[i] % 7 + 'A';
    es += ch;
  }
  es += '\0';
  return es;
}

void FileWriter::write(string fileName, string encyptStr) {
  printf("开始保存加密数据\n");
  CommonToolNS::writeMsgToTxt(fileName, encyptStr);
  return;
}

}  // namespace FacadeNS
