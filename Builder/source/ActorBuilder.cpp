#include "ActorBuilder.h"

namespace BuilderNS {
Actor* ActorBuilder::createActor() { return actor; }

void HeroBuilder::buildType() {
  actor->setType("英雄");
  return;
}
void HeroBuilder::buildSex() {
  actor->setSex("男");
  return;
}
void HeroBuilder::buildFace() {
  actor->setFace("英俊");
  return;
}
void HeroBuilder::buildCostume() {
  actor->setCostume("盔甲");
  return;
}
void HeroBuilder::buildHairStyle() {
  actor->setHairStyle("飘逸");
  return;
}

void AngelBuilder::buildType() {
  actor->setType("天使");
  return;
}
void AngelBuilder::buildSex() {
  actor->setSex("女");
  return;
}
void AngelBuilder::buildFace() {
  actor->setFace("漂亮");
  return;
}
void AngelBuilder::buildCostume() {
  actor->setCostume("白裙");
  return;
}
void AngelBuilder::buildHairStyle() {
  actor->setHairStyle("披肩长发");
  return;
}

void DevilBuilder::buildType() {
  actor->setType("恶魔");
  return;
}
void DevilBuilder::buildSex() {
  actor->setSex("妖");
  return;
}
void DevilBuilder::buildFace() {
  actor->setFace("丑陋");
  return;
}
void DevilBuilder::buildCostume() {
  actor->setCostume("黑衣");
  return;
}
void DevilBuilder::buildHairStyle() {
  actor->setHairStyle("光头");
  return;
}

}  // namespace BuilderNS