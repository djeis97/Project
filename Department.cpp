#include "Department.hpp"

#include <iostream>
#include <string.h>

Department::Department (int myId, std::string myName)
  : departmentId(myId), name(myName) {}

std::ostream& operator<< (std::ostream& out, Department& me) {
  return out << "Department: " << me.name;
}

std::string Department::getName () {
  return name;
}

int Department::getDepartmentId () {
  return departmentId;
}
