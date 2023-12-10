#include "Account.h"

using namespace std;

namespace StateNS {

void NormalState::deposit(double amount) {
  acc->setBalance(acc->getBalance() + amount);
  stateCheck();
  return;
}

void NormalState::withdraw(double amount) {
  acc->setBalance(acc->getBalance() - amount);
  stateCheck();
  return;
}

void NormalState::computeInterest() {
  printf("正常状态，无需支付利息\n");
  return;
}

void NormalState::stateCheck() {
  if (acc->getBalance() > -2000 && acc->getBalance() < 0) {
    acc->setState(new OverdraftState(this));
  } else if (acc->getBalance() <= -2000) {
    acc->setState(new RestrictedState(this));
    printf("操作受限\n");
  }
  return;
}

void OverdraftState::deposit(double amount) {
  acc->setBalance(acc->getBalance() + amount);
  stateCheck();
  return;
}

void OverdraftState::withdraw(double amount) {
  acc->setBalance(acc->getBalance() - amount);
  stateCheck();
  return;
}

void OverdraftState::computeInterest() {
  printf("计算利息\n");
  return;
}

void OverdraftState::stateCheck() {
  if (acc->getBalance() >= 0) {
    acc->setState(new NormalState(this));
  } else if (acc->getBalance() == -2000) {
    acc->setState(new RestrictedState(this));
  } else if (acc->getBalance() < -2000) {
    printf("操作受限\n");
  }
  return;
}

void RestrictedState::deposit(double amount) {
  acc->setBalance(acc->getBalance() + amount);
  stateCheck();
  return;
}

void RestrictedState::withdraw(double amount) {
  printf("账户受限，取款失败");
  return;
}

void RestrictedState::computeInterest() {
  printf("计算利息\n");
  return;
}

void RestrictedState::stateCheck() {
  if (acc->getBalance() >= 0) {
    acc->setState(new NormalState(this));
  } else if (acc->getBalance() > -2000) {
    acc->setState(new OverdraftState(this));
  }
  return;
}

Account::Account(std::string owner, double init) {
  this->owner = owner;
  this->balance = init;
  this->state = new NormalState(this);
  printf("%s开户，初始金额为%f\n", owner.c_str(), init);
}

void Account::deposit(double amount) {
  printf("%s存款%f\n", owner.c_str(), amount);
  state->deposit(amount);
  printf("现在余额为%f\n", balance);
  printf("现在账户状态为：");
  if (dynamic_cast<NormalState*>(this->state)) {
    printf("正常状态");
  } else if (dynamic_cast<OverdraftState*>(this->state)) {
    printf("透支状态");
  } else if (dynamic_cast<RestrictedState*>(this->state)) {
    printf("受限状态");
  }
  printf("\n-----------------\n");
  return;
}

void Account::withdraw(double amount) {
  printf("%s取款%f\n", owner.c_str(), amount);
  state->withdraw(amount);
  printf("现在余额为%f\n", balance);
  printf("现在账户状态为：");
  if (dynamic_cast<NormalState*>(this->state)) {
    printf("正常状态");
  } else if (dynamic_cast<OverdraftState*>(this->state)) {
    printf("透支状态");
  } else if (dynamic_cast<RestrictedState*>(this->state)) {
    printf("受限状态");
  }
  printf("\n-----------------\n");
  return;
}

}  // namespace StateNS