#ifndef __IGOCHESSMAN_H__
#define __IGOCHESSMAN_H__

#include <string>

namespace FlyweightNS {

/**
 * @brief 棋子接口
 *
 */
class IgoChessman {
 public:
  virtual std::string getColor() = 0;
  void display() {
    printf("棋子的颜色是%s\n", this->getColor().c_str());
    return;
  }
};

class BlackIgoChessman : public IgoChessman {
 public:
  std::string getColor() override { return "黑色"; }
};

class WhiteIgoChessman : public IgoChessman {
 public:
  std::string getColor() override { return "白色"; }
};

}  // namespace FlyweightNS

#endif