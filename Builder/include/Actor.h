#ifndef __ACTOR_H__
#define __ACTOR_H__

#include <string>

namespace BuilderNS {
/**
 * @brief 角色类
 *
 */
class Actor {
 private:
  std::string type;
  std::string sex;
  std::string face;
  std::string costume;
  std::string hairstyle;

 public:
  void setType(std::string type);
  void setSex(std::string sex);
  void setFace(std::string face);
  void setCostume(std::string costume);
  void setHairStyle(std::string hairstyle);

 public:
  void display();
};
}  // namespace BuilderNS

#endif