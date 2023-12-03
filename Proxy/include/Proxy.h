#ifndef __PROXY_H__
#define __PROXY_H__

#include "Searcher.h"

namespace ProxyNS {

class ProxySearcher : public Searcher {
 private:
  RealSearcher* searcher = new RealSearcher();
  AccessValidator* validator = new AccessValidator();
  Logger* logger = new Logger();

 public:
  std::string doSearch(std::string userId, std::string keyword) override {
    if (validator->validate(userId)) {
      std::string msg = searcher->doSearch(userId, keyword);
      logger->log(userId);
      return msg;
    } else {
      return "";
    }
  }
};

}  // namespace ProxyNS

#endif