#ifndef __MEMENTO_H__
#define __MEMENTO_H__

#include <string>

namespace MementoNS {

class ChessmanMemento;

/**
 * @brief 象棋棋子类
 *
 */
class Chessman {
 private:
  std::string label;
  int x;
  int y;

 public:
  Chessman(std::string label, int x, int y) {
    this->label = label;
    this->x = x;
    this->y = y;
  }

 public:
  void setLabel(std::string label) {
    this->label = label;
    return;
  }
  void setX(int x) {
    this->x = x;
    return;
  }
  void setY(int y) {
    this->y = y;
    return;
  }
  std::string getLabel() const { return label; }
  int getX() const { return x; }
  int getY() const { return y; }

 public:
  ChessmanMemento* save();
  void restore(ChessmanMemento*);
};

/**
 * @brief 象棋棋子备忘录类
 *
 */
class ChessmanMemento {
 public:
 private:
  std::string label;
  int x;
  int y;

 public:
  ChessmanMemento(std::string label, int x, int y) {
    this->label = label;
    this->x = x;
    this->y = y;
  }

 public:
  void setLabel(std::string label) {
    this->label = label;
    return;
  }
  void setX(int x) {
    this->x = x;
    return;
  }
  void setY(int y) {
    this->y = y;
    return;
  }
  std::string getLabel() const { return label; }
  int getX() const { return x; }
  int getY() const { return y; }
};

/**
 * @brief 象棋棋子备忘录管理类
 *
 */
class MementoCareTaker {
 private:
  ChessmanMemento* memento;

 public:
  void setMemento(ChessmanMemento* memento) {
    this->memento = memento;
    return;
  }
  ChessmanMemento* getMemento() { return memento; }
};

}  // namespace MementoNS

#endif