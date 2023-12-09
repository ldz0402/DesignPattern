#ifndef __MEDIATOR_H__
#define __MEDIATOR_H__

namespace MediatorNS {

class Component;

class Button;
class List;
class TextBox;
class ComboBox;

class Mediator;
class ConcreteMediator;

/**
 * @brief 抽象组件类
 *
 */
class Component {
 protected:
  Mediator* mediator;

 public:
  void setMediator(Mediator* mediator) {
    this->mediator = mediator;
    return;
  }
  void changed();
  virtual void update() = 0;
};

class Button : public Component {
 public:
  void update() override { return; }
};

class List : public Component {
 public:
  void update() override;
  void select();
};

class ComboBox : public Component {
 public:
  void update() override;
  void select();
};

class TextBox : public Component {
 public:
  void update() override;
  void setText();
};

/**
 * @brief 抽象中介类
 *
 */
class Mediator {
 public:
  virtual void componentChanged(Component*) = 0;
};

/**
 * @brief 具体中介类
 *
 */
class ConcreteMediator : public Mediator {
 public:
  Button* button;
  List* list;
  TextBox* tb;
  ComboBox* cb;

 public:
  void componentChanged(Component* c) override;
};

};  // namespace MediatorNS

#endif