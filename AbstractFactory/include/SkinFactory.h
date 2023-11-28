#ifndef __SKINFACTORY_H__
#define __SKINFACTORY_H__

#include "Button.h"
#include "ComboBox.h"
#include "TextField.h"

namespace AbstractFactoryNS {
/**
 * @brief 皮肤工厂接口
 *
 */
class SkinFactory {
 public:
  virtual Button* createButton() = 0;
  virtual ComboBox* createComboBox() = 0;
  virtual TextField* createTextField() = 0;
};

/**
 * @brief Spring 皮肤工厂
 *
 */
class SpringFactory : public SkinFactory {
 public:
  Button* createButton() override;
  ComboBox* createComboBox() override;
  TextField* createTextField() override;
};

/**
 * @brief Summer 皮肤工厂
 *
 */
class SummerFactory : public SkinFactory {
 public:
  Button* createButton() override;
  ComboBox* createComboBox() override;
  TextField* createTextField() override;
};

}  // namespace AbstractFactoryNS

#endif