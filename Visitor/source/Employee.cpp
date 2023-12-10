#include "Employee.h"

#include "Department.h"

namespace VisitorNS {
void FulltimeEmployee::accept(Department* department) {
  department->visit(this);
  return;
}
void ParttimeEmployee::accept(Department* department) {
  department->visit(this);
  return;
}

void EmployeeList::accept(Department* department) {
  for (auto employee : employees) {
    employee->accept(department);
  }
  return;
}

}  // namespace VisitorNS