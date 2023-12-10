#include <iostream>

#include "Discount.h"

using namespace std;
using namespace StrategyNS;

int main(int argc, char** argv) {
  printf("I'm Strategy Pattern!\n");
  printf("+++++++++++++++++\n");
  // begin test
  MovieTicket* ticket = new MovieTicket();
  ticket->setPrice(100);

  Discount* discount = new StudentDiscount();
  ticket->setDiscount(discount);

  printf("折后价：%f\n", ticket->getPrice());

  free(discount);
  discount = new ChildDiscount();
  ticket->setDiscount(discount);

  printf("折后价：%f\n", ticket->getPrice());

  // end test
  return 0;
}