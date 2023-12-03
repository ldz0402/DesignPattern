#ifndef __PURCHASEREQUEST_H__
#define __PURCHASEREQUEST_H__

#include <string>

namespace ChainOfResponsibilityNS {

class PurchaseRequest {
 private:
  double amount;
  int number;
  std::string purpose;

 public:
  PurchaseRequest(double amount, int number, std::string purpose)
      : amount(amount), number(number), purpose(purpose) {}

  void setAmount(double amount) {
    this->amount = amount;
    return;
  }
  void setNumber(double number) {
    this->number = number;
    return;
  }
  void setPurpose(std::string purpose) {
    this->purpose = purpose;
    return;
  }

  double getAmount() { return this->amount; }
  int getNumber() { return this->number; }
  std::string getPurpose() { return this->purpose; }
};

}  // namespace ChainOfResponsibilityNS

#endif