#include "Mediator.h"

#include <iostream>

using namespace std;

namespace MediatorNS {

void Component::changed() {
  mediator->componentChanged(this);
  return;
}

void List::update() {
  printf("列表框增加一项:xxx\n");
  return;
}

void List::select() {
  printf("列表框选中项\n");
  return;
}

void ComboBox::update() {
  printf("组合框增加一项:xxx\n");
  return;
}

void ComboBox::select() {
  printf("组合框选中项:yyy\n");
  return;
}

void TextBox::update() {
  printf("增加成功后文本框清空\n");
  return;
}

void TextBox::setText() {
  printf("文本框显示:yyy\n");
  return;
}

void ConcreteMediator::componentChanged(Component* c) {
  if (c == button) {
    printf("--单击增加按钮--\n");
    list->update();
    cb->update();
    tb->update();
  } else if (c == list) {
    printf("--从列表框选择--\n");
    cb->select();
    tb->setText();
  } else if (c == cb) {
    printf("--从组合框选择--\n");
    cb->select();
    tb->setText();
  }
  return;
}
}  // namespace MediatorNS