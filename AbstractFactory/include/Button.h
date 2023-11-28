#ifndef __BUTTON_H__
#define __BUTTON_H__

namespace AbstractFactoryNS {
/**
 * @brief 按钮接口
 *
 */
class Button {
 public:
  virtual void display() = 0;
};

/**
 * @brief Spring 按钮类
 *
 */
class SpringButton : public Button {
 public:
  void display() override;
};

/**
 * @brief Summer 按钮类
 *
 */
class SummerButton : public Button {
 public:
  void display() override;
};

}  // namespace AbstractFactoryNS
#endif