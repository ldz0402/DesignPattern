#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <string>
#include <vector>

namespace ObserverNS {

class AllControlCenter;

/**
 * @brief 抽象观察类
 *
 */
class Observer {
 public:
  virtual std::string getName() = 0;
  virtual void setName(std::string) = 0;
  virtual void help() = 0;
  virtual void beAttacked(AllControlCenter*) = 0;
};

/**
 * @brief 具体观察类
 *
 */
class Player : public Observer {
 private:
  std::string name;

 public:
  Player(std::string name) { this->name = name; }

  std::string getName() override { return name; }
  void setName(std::string name) override {
    this->name = name;
    return;
  }

  void help() override {
    printf("坚持住，我%s来救你！\n", name.c_str());
    return;
  }
  void beAttacked(AllControlCenter* center) override;
};

/**
 * @brief 抽象目标类
 *
 */
class AllControlCenter {
 protected:
  std::string name;
  std::vector<Observer*> players;

 public:
  void setName(std::string name) {
    this->name = name;
    return;
  }

  std::string getName() const { return name; }

  void join(Observer* player) {
    printf("%s加入%s战队\n", player->getName().c_str(), name.c_str());
    players.push_back(player);
    return;
  }

  void quit(Observer* player) {
    for (auto begin = players.begin(), end = players.end(); begin != end;
         ++begin) {
      if (*begin == player) {
        printf("%s退出%s战队\n", player->getName().c_str(), name.c_str());
        players.erase(begin);
        return;
      }
    }
    return;
  }

  virtual void notifyObserver(std::string name) = 0;
};

class ConcreteAllControlCenter : public AllControlCenter {
 public:
  ConcreteAllControlCenter(std::string name) {
    this->name = name;
    printf("%s战队创建成功\n", name.c_str());
  }
  void notifyObserver(std::string name) override {
    printf("%s战队紧急通知，成员%s正遭受敌人攻击！\n", this->name.c_str(),
           name.c_str());
    for (auto player : players) {
      if (name != player->getName()) {
        player->help();
      }
    }
    return;
  }
};

}  // namespace ObserverNS

#endif