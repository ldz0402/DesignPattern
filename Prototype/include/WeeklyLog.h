#ifndef __WEEKLYLOG_H__
#define __WEEKLYLOG_H__

#include <string>

namespace PrototypeNS {
/**
 * @brief 周报类
 *
 */
class WeeklyLog {
 private:
  std::string name;
  std::string date;
  std::string content;

 public:
  void setName(std::string name);
  void setDate(std::string date);
  void setContent(std::string content);
  std::string getName();
  std::string getDate();
  std::string getContent();

  void display();

 public:
  /**
   * @brief 周报类克隆方法
   *
   * @return WeeklyLog*
   */
  WeeklyLog* clone();
};
}  // namespace PrototypeNS

#endif