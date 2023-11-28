#include "SkinFactory.h"

namespace AbstractFactoryNS {
Button* SpringFactory::createButton() {
  Button* button = new SpringButton();
  return button;
}

TextField* SpringFactory::createTextField() {
  TextField* textField = new SpringTextField();
  return textField;
}

ComboBox* SpringFactory::createComboBox() {
  ComboBox* comboBox = new SpringComboBox();
  return comboBox;
}

Button* SummerFactory::createButton() {
  Button* button = new SummerButton();
  return button;
}

TextField* SummerFactory::createTextField() {
  TextField* textField = new SummerTextField();
  return textField;
}

ComboBox* SummerFactory::createComboBox() {
  ComboBox* comboBox = new SummerComboBox();
  return comboBox;
}

}  // namespace AbstractFactoryNS