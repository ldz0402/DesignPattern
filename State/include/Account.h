#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <string>

namespace StateNS {
class Account;

/**
 * @brief 抽象状态类
 *
 */
class AccountState {
 public:
  Account* acc;
  virtual void deposit(double amount) = 0;
  virtual void withdraw(double amount) = 0;
  virtual void computeInterest() = 0;
  virtual void stateCheck() = 0;
};

/**
 * @brief 正常状态：具体状态类
 *
 */
class NormalState : public AccountState {
 public:
  NormalState(Account* account) { this->acc = account; }
  NormalState(AccountState* state) { this->acc = state->acc; }
  void deposit(double amount) override;
  void withdraw(double amount) override;
  void computeInterest() override;
  void stateCheck() override;
};

/**
 * @brief 透支状态：具体状态类
 *
 */
class OverdraftState : public AccountState {
 public:
  OverdraftState(AccountState* state) { this->acc = state->acc; }
  void deposit(double amount) override;
  void withdraw(double amount) override;
  void computeInterest() override;
  void stateCheck() override;
};

/**
 * @brief 受限状态：具体状态类
 *
 */
class RestrictedState : public AccountState {
 public:
  RestrictedState(AccountState* state) { this->acc = state->acc; }
  void deposit(double amount) override;
  void withdraw(double amount) override;
  void computeInterest() override;
  void stateCheck() override;
};

class Account {
 private:
  AccountState* state;
  std::string owner;
  double balance;

 public:
  Account(std::string owner, double init);

  double getBalance() const { return balance; }

  void setBalance(double balance) {
    this->balance = balance;
    return;
  }

  void setState(AccountState* state) {
    this->state = state;
    return;
  }

  void deposit(double amount);

  void withdraw(double amount);

  void computeInterest() {
    state->computeInterest();
    return;
  }
};

}  // namespace StateNS

#endif