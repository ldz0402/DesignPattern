#ifndef __SEARCHER_H__
#define __SEARCHER_H__

#include <string>

namespace ProxyNS {

class Searcher {
 public:
  virtual std::string doSearch(std::string userId, std::string keyword) = 0;
};

class AccessValidator {
 public:
  bool validate(std::string userId) {
    printf("在数据库中验证用户%s是不是合法用户？\n", userId.c_str());
    if ("ldz" == userId) {
      printf("%s登录成功\n", userId.c_str());
      return true;
    } else {
      printf("%s登录失败\n", userId.c_str());
      return false;
    }
  }
};

class Logger {
 public:
  void log(std::string userId) {
    printf("更新数据库，用户%s查询次数+1!\n", userId.c_str());
    return;
  }
};

class RealSearcher : public Searcher {
 public:
  std::string doSearch(std::string userId, std::string keyword) override {
    printf("用户%s使用关键字%s查询商务信息\n", userId.c_str(), keyword.c_str());
    return "查询无果";
  }
};

}  // namespace ProxyNS

#endif