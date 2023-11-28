#include "WeeklyLog.h"

using namespace std;

namespace PrototypeNS {

void WeeklyLog::setName(string name) {
  this->name = name;
  return;
}
void WeeklyLog::setDate(string date) {
  this->date = date;
  return;
}
void WeeklyLog::setContent(string content) {
  this->content = content;
  return;
}

string WeeklyLog::getName() { return this->name; }
string WeeklyLog::getDate() { return this->date; }
string WeeklyLog::getContent() { return this->content; }

void WeeklyLog::display() {
  printf("***周报***\n");
  printf("周次：%s\n", this->date.c_str());
  printf("姓名：%s\n", this->name.c_str());
  printf("内容：%s\n", this->content.c_str());
}

WeeklyLog* WeeklyLog::clone() {
  WeeklyLog* weeklyLog = new WeeklyLog();
  weeklyLog->setName(this->name);
  weeklyLog->setDate(this->date);
  weeklyLog->setContent(this->content);
  return weeklyLog;
}

}  // namespace PrototypeNS