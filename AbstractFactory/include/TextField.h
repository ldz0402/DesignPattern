#ifndef __TEXTFIELD_H__
#define __TEXTFIELD_H__

namespace AbstractFactoryNS {
/**
 * @brief 文本框接口
 *
 */
class TextField {
 public:
  virtual void display() = 0;
};

/**
 * @brief Spring 文本框类
 *
 */
class SpringTextField : public TextField {
 public:
  void display() override;
};

/**
 * @brief Summer 文本框类
 *
 */
class SummerTextField : public TextField {
 public:
  void display() override;
};

}  // namespace AbstractFactoryNS
#endif