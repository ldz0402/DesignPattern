#include "Actor.h"

namespace BuilderNS {
void Actor::setType(std::string type) {
  this->type = type;
  return;
}
void Actor::setSex(std::string sex) {
  this->sex = sex;
  return;
}
void Actor::setFace(std::string face) {
  this->face = face;
  return;
}
void Actor::setCostume(std::string costume) {
  this->costume = costume;
  return;
}
void Actor::setHairStyle(std::string hairstyle) {
  this->hairstyle = hairstyle;
  return;
}

void Actor::display() {
  printf("%s 的外观：\n", this->type.c_str());
  printf("性别：%s\n", this->sex.c_str());
  printf("面容：%s\n", this->face.c_str());
  printf("服装：%s\n", this->costume.c_str());
  printf("发型：%s\n", this->hairstyle.c_str());
  return;
}
}  // namespace BuilderNS