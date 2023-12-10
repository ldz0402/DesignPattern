#include "Discount.h"
namespace StrategyNS {
double MovieTicket::getPrice() {
  if (discount) {
    return discount->calculate(price);
  }
  return price;
}
}  // namespace StrategyNS