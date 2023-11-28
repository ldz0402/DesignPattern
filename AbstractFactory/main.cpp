#include <iostream>

#include "CommonTool.h"
#include "SkinFactory.h"

using namespace std;
using namespace AbstractFactoryNS;

int main(int argc, char** argv) {
  printf("I'm Abstract Factory Pattern!\n");
  // begin test
  SkinFactory* skinFactory = new SpringFactory();
  Button* button = skinFactory->createButton();
  TextField* textField = skinFactory->createTextField();
  ComboBox* comboBox = skinFactory->createComboBox();
  button->display();
  textField->display();
  comboBox->display();
  // end test
  return 0;
}
