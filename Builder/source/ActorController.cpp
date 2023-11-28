#include "ActorController.h"

namespace BuilderNS {
Actor* ActorController::construct(ActorBuilder* ab) {
  ab->buildType();
  ab->buildSex();
  ab->buildFace();
  ab->buildCostume();
  ab->buildHairStyle();
  Actor* actor = ab->createActor();
  return actor;
}
}  // namespace BuilderNS