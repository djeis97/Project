#include "Department.hpp"

#include <iostream>
#include <string.h>

Department::Department (std::string myName)
  : name(myName) {}

std::ostream& Department::operator<< (std::ostream& out) {
  return out << "Department: " << name;
}

std::string Department::getName () {
  return name;
}
