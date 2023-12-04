#ifndef __HANDLER_H__
#define __HANDLER_H__

#include <iostream>

namespace CommandNS {

/**
 * @brief 帮助文档处理类：请求接收者
 *
 */
class HelpHandler {
 public:
  void display() {
    printf("显示帮助文档\n");
    return;
  }
};

/**
 * @brief 窗口处理类：请求接收者
 *
 */
class WindowHandler {
 public:
  void minimize() {
    printf("将窗口最小化至托盘\n");
    return;
  }
};
}  // namespace CommandNS

#endif