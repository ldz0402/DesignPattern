#ifndef __DISCOUNT_H__
#define __DISCOUNT_H__

#include <iostream>

namespace StrategyNS {

class Discount;

class MovieTicket {
 private:
  double price;
  Discount* discount;

 public:
  void setPrice(double price) {
    this->price = price;
    return;
  }

  void setDiscount(Discount* discount) {
    this->discount = discount;
    return;
  }

  double getPrice();
};

class Discount {
 public:
  virtual double calculate(double price) = 0;
};

class StudentDiscount : public Discount {
 public:
  double calculate(double price) override {
    printf("学生票\n");
    return price * 0.8;
  }
};

class ChildDiscount : public Discount {
 public:
  double calculate(double price) override {
    printf("儿童票\n");
    return price * 0.5;
  }
};

class AdultDiscount : public Discount {
 public:
  double calculate(double price) override {
    printf("成人票\n");
    return price;
  }
};

}  // namespace StrategyNS

#endif