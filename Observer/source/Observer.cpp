#include "Observer.h"

namespace ObserverNS {
void Player::beAttacked(AllControlCenter* center) {
  printf("我%s正在被攻击！请求%s战队支援\n", name.c_str(),
         center->getName().c_str());
  center->notifyObserver(name);
  return;
}
};  // namespace ObserverNS