#ifndef __OBJECT_H__
#define __OBJECT_H__

#include <string>

namespace IteratorNS {
/**
 * @brief 抽象产品
 *
 */
class Object {
 public:
  std::string value;

 public:
  Object(std::string value) { this->value = value; }
  std::string getValue() { return value; }
  virtual void display() = 0;
};

/**
 * @brief 具体产品
 *
 */
class StringObj : public Object {
 public:
  StringObj(std::string value) : Object(value) {}

  void display() override {
    printf("StringObject: %s\n", getValue().c_str());
    return;
  }
};

}  // namespace IteratorNS

#endif