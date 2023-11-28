#ifndef __ACTORCONTROLLER_H__
#define __ACTORCONTROLLER_H__

#include "Actor.h"
#include "ActorBuilder.h"

namespace BuilderNS {
class ActorController {
 public:
  Actor* construct(ActorBuilder* ab);
};
}  // namespace BuilderNS

#endif