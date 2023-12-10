#include <iostream>

#include "Department.h"

using namespace std;
using namespace VisitorNS;

int main(int argc, char** argv) {
  printf("I'm Visitor Pattern!\n");
  printf("+++++++++++++++++\n");
  // begin test
  EmployeeList employees;

  Employee *x1, *x2, *x3, *x4, *x5;
  x1 = new FulltimeEmployee("x1", 100, 40);
  x2 = new FulltimeEmployee("x2", 100, 30);
  x3 = new FulltimeEmployee("x3", 100, 50);

  x4 = new ParttimeEmployee("x4", 80, 40);
  x5 = new ParttimeEmployee("x5", 80, 50);

  employees.addEmployee(x1);
  employees.addEmployee(x2);
  employees.addEmployee(x3);
  employees.addEmployee(x4);
  employees.addEmployee(x5);

  Department* department = new HEDepartment();

  employees.accept(department);

  free(department);

  department = new FDADepartment();
  employees.accept(department);

  // end test
  return 0;
}