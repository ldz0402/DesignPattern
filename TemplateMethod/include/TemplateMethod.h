#ifndef __TEMPLATEMETHOD_H__
#define __TEMPLATEMETHOD_H__

#include <string>

namespace TemplateMethodNS {

/**
 * @brief 账户类：抽象类
 *
 */
class Account {
 public:
  // 基本方法——具体方法
  bool validate(std::string account, std::string passward) {
    printf("账号：%s\n", account.c_str());
    printf("密码：%s\n", passward.c_str());
    if ("x" == account && "123456" == passward) {
      return true;
    }
    return false;
  }

  // 基本方法——抽象方法
  virtual void calculateInterest() = 0;

  // 基本方法——具体方法
  void display() {
    printf("显示利息\n");
    return;
  }

  // 模板方法
  void handle(std::string account, std::string passward) {
    if (!validate(account, passward)) {
      printf("账户密码错误\n");
      return;
    }
    calculateInterest();
    display();
    return;
  }
};

class CurrentAccount : public Account {
 public:
  void calculateInterest() override {
    printf("按活期利率计算利息\n");
    return;
  }
};

class SavingAccount : public Account {
 public:
  void calculateInterest() override {
    printf("按订期利率计算利息\n");
    return;
  }
};

}  // namespace TemplateMethodNS

#endif