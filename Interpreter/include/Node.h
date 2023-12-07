#ifndef __NODE_H__
#define __NODE_H__

#include <string>

namespace InterpreterNS {

/**
 * @brief 抽象表达式
 *
 */
class AbstractNode {
 public:
  virtual std::string interpret() = 0;
};

/**
 * @brief And解释：非终结符表达式
 *
 */
class AndNode : public AbstractNode {
 private:
  AbstractNode* left;
  AbstractNode* right;

 public:
  AndNode(AbstractNode* left, AbstractNode* right) {
    this->left = left;
    this->right = right;
  }

 public:
  std::string interpret() override {
    return left->interpret() + "再" + right->interpret();
  }
};

/**
 * @brief 简单句子解释：非终结符表达式
 *
 */
class SentenceNode : public AbstractNode {
 private:
  AbstractNode* direction;
  AbstractNode* action;
  AbstractNode* distance;

 public:
  SentenceNode(AbstractNode* direction, AbstractNode* action,
               AbstractNode* distance) {
    this->direction = direction;
    this->action = action;
    this->distance = distance;
  }

 public:
  std::string interpret() override {
    return direction->interpret() + action->interpret() + distance->interpret();
  }
};

/**
 * @brief 方向解释：终结符表达式
 *
 */
class DirectionNode : public AbstractNode {
 private:
  std::string direction;

 public:
  DirectionNode(std::string direction) { this->direction = direction; }

 public:
  std::string interpret() override {
    if ("up" == direction) {
      return "向上";
    } else if ("left" == direction) {
      return "向左";
    } else if ("right" == direction) {
      return "向右";
    } else if ("down" == direction) {
      return "向下";
    }
    return "无效指令";
  }
};

/**
 * @brief 行为解释：终结符表达式
 *
 */
class ActionNode : public AbstractNode {
 private:
  std::string action;

 public:
  ActionNode(std::string action) { this->action = action; }

 public:
  std::string interpret() override {
    if ("move" == action) {
      return "移动";
    } else if ("run" == action) {
      return "快速移动";
    }
    return "无效指令";
  }
};

/**
 * @brief 距离解释：终结符表达式
 *
 */
class DistanceNode : public AbstractNode {
 private:
  std::string distance;

 public:
  DistanceNode(std::string distance) { this->distance = distance; }

 public:
  std::string interpret() override { return distance; }
};

};  // namespace InterpreterNS

#endif