#include "Employee.h"

namespace VisitorNS {

/**
 * @brief 部门类：抽象访问类
 *
 */
class Department {
 public:
  virtual void visit(FulltimeEmployee*) = 0;
  virtual void visit(ParttimeEmployee*) = 0;
};

/**
 * @brief 财务部类：具体访问者
 *
 */
class FDADepartment : public Department {
 public:
  void visit(FulltimeEmployee* employee) override {
    int time = employee->getWorkTime();
    double wage = employee->getWeeklyWage();
    if (time > 40) {
      wage = wage + (time - 40) * 100;
    } else if (time <= 40) {
      wage = wage - (time - 40) * 80;
      if (wage < 0) {
        wage = 0;
      }
    }
    printf("正式员工：%s，实际工资为：%f\n", employee->getName().c_str(), wage);
    return;
  }

  void visit(ParttimeEmployee* employee) override {
    int time = employee->getWorkTime();
    double hourWage = employee->getHourWage();
    printf("兼职员工：%s，实际工资为：%f\n", employee->getName().c_str(),
           hourWage);
    return;
  }
};

/**
 * @brief 人力资源部：具体访问者
 *
 */
class HEDepartment : public Department {
 public:
  void visit(FulltimeEmployee* employee) override {
    int time = employee->getWorkTime();
    printf("正式员工：%s，实际工作时间为：%d\n", employee->getName().c_str(),
           time);
    if (time > 40) {
      printf("正式员工：%s，加班时间为：%d\n", employee->getName().c_str(),
             time - 40);

    } else if (time < 40) {
      printf("正式员工：%s，请假时间为：%d\n", employee->getName().c_str(),
             40 - time);
    }
    return;
  }
  void visit(ParttimeEmployee* employee) override {
    int time = employee->getWorkTime();
    printf("兼职员工：%s，实际工作时间为：%d\n", employee->getName().c_str(),
           time);
    return;
  }
};

}  // namespace VisitorNS