#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <string>
#include <vector>

using namespace std;

namespace VisitorNS {
class Department;

// 员工类：抽象元素类
class Employee {
 public:
  virtual void accept(Department*) = 0;
};

// 全职员工类：具体元素类
class FulltimeEmployee : public Employee {
 private:
  string name;
  double weeklyWage;
  int workTime;

 public:
  FulltimeEmployee(string name, double weeklyWage, int workTime) {
    this->name = name;
    this->weeklyWage = weeklyWage;
    this->workTime = workTime;
  }

  void setName(string name) {
    this->name = name;
    return;
  }
  void setWeeklyWage(double weeklyWage) {
    this->weeklyWage = weeklyWage;
    return;
  }
  void setWorkTime(int workTime) {
    this->workTime = workTime;
    return;
  }
  string getName() const { return name; }
  double getWeeklyWage() const { return weeklyWage; }
  int getWorkTime() const { return workTime; }

  void accept(Department*) override;
};

// 兼职员工类：具体元素类
class ParttimeEmployee : public Employee {
 private:
  string name;
  double hourWage;
  int workTime;

 public:
  ParttimeEmployee(string name, double hourWage, int workTime) {
    this->name = name;
    this->hourWage = hourWage;
    this->workTime = workTime;
  }

  void setName(string name) {
    this->name = name;
    return;
  }
  void setHourWage(double hourWage) {
    this->hourWage = hourWage;
    return;
  }
  void setWorkTime(int workTime) {
    this->workTime = workTime;
    return;
  }
  string getName() const { return name; }
  double getHourWage() const { return hourWage; }
  int getWorkTime() const { return workTime; }

  void accept(Department*) override;
};

/**
 * @brief 员工列表类：对象结构
 *
 */
class EmployeeList {
 public:
  vector<Employee*> employees;

  void addEmployee(Employee* employee) {
    employees.push_back(employee);
    return;
  }
  void accept(Department*);
};

}  // namespace VisitorNS

#endif