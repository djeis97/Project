#include "Department.hpp"

#include <iostream>
#include <string.h>

Department::Department (int myId, std::string myName)
  : departmentId(myId), name(myName) {}

std::ostream& Department::operator<< (std::ostream& out) {
  return out << "Department: " << name;
}

std::string Department::getName () {
  return name;
}

int Department::getDepartmentId () {
  return departmentId;
}
