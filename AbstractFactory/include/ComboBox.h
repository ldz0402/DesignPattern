#ifndef __COMBOBOX_H__
#define __COMBOBOX_H__

namespace AbstractFactoryNS {
/**
 * @brief 组合框接口
 *
 */
class ComboBox {
 public:
  virtual void display() = 0;
};

/**
 * @brief Spring 组合框类
 *
 */
class SpringComboBox : public ComboBox {
 public:
  void display() override;
};

/**
 * @brief Summer 组合框类
 *
 */
class SummerComboBox : public ComboBox {
 public:
  void display() override;
};

}  // namespace AbstractFactoryNS
#endif