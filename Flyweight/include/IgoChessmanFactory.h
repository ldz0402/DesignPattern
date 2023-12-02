#ifndef __IGOCHESSMANFACTORY_H__
#define __IGOCHESSMANFACTORY_H__

#include <map>
#include <string>

#include "IgoChessman.h"

namespace FlyweightNS {

class IgoChessmanFactory {
 private:
  static IgoChessmanFactory* instance;
  static std::map<std::string, IgoChessman*> pool;

 private:
  IgoChessmanFactory() {}

 public:
  static IgoChessmanFactory* getInstance() {
    return IgoChessmanFactory::instance;
  }

  IgoChessman* getIgoChessman(std::string color) {
    if (pool.find(color) != pool.end()) {
      return pool[color];
    }
    return nullptr;
  }
};

};  // namespace FlyweightNS

#endif