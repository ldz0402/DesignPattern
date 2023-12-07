#ifndef __INSTRUCTIONHANDLER_H__
#define __INSTRUCTIONHANDLER_H__

#include "Node.h"

namespace InterpreterNS {

/**
 * @brief 指令处理类
 *
 */
class InstructionHandler {
 private:
  AbstractNode *node;

 public:
  void handle(std::string instruction);

  std::string output() { return node->interpret(); }
};

}  // namespace InterpreterNS

#endif