#include <iostream>

#include "ActorController.h"

using namespace std;
using namespace BuilderNS;

int main(int argc, char** argv) {
  printf("I'm Builder Pattern!\n");
  // begin test
  ActorController actorController;

  ActorBuilder* heroBuilder = new HeroBuilder();
  Actor* hero = actorController.construct(heroBuilder);
  hero->display();

  ActorBuilder* angelBuilder = new AngelBuilder();
  Actor* angel = actorController.construct(angelBuilder);
  angel->display();

  // end test
  return 0;
}
