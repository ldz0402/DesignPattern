#ifndef __ACTORBUILDER_H__
#define __ACTORBUILDER_H__

#include "Actor.h"

namespace BuilderNS {
/**
 * @brief 角色建造者接口
 *
 */
class ActorBuilder {
 protected:
  Actor* actor = new Actor();

 public:
  virtual void buildType() = 0;
  virtual void buildSex() = 0;
  virtual void buildFace() = 0;
  virtual void buildCostume() = 0;
  virtual void buildHairStyle() = 0;

 public:
  Actor* createActor();
};

/**
 * @brief 英雄角色建造者
 *
 */
class HeroBuilder : public ActorBuilder {
 public:
  void buildType() override;
  void buildSex() override;
  void buildFace() override;
  void buildCostume() override;
  void buildHairStyle() override;
};

/**
 * @brief 天使角色建造者
 *
 */
class AngelBuilder : public ActorBuilder {
 public:
  void buildType() override;
  void buildSex() override;
  void buildFace() override;
  void buildCostume() override;
  void buildHairStyle() override;
};

/**
 * @brief 恶魔角色建造者
 *
 */
class DevilBuilder : public ActorBuilder {
 public:
  void buildType() override;
  void buildSex() override;
  void buildFace() override;
  void buildCostume() override;
  void buildHairStyle() override;
};

}  // namespace BuilderNS

#endif