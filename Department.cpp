#include "Department.hpp"

#include <iostream>
#include <string.h>

Department::Department () {}

Department::Department (int myId, std::string myName)
  : departmentId(myId), name(myName)  {
}

Department::~Department () {}

int Department::getDepartmentId () const {
  return departmentId;
}

std::string Department::getName () const {
  return name;
}

std::ostream& operator<< (std::ostream& out, const Department& me) {
  return out << "Department: " << me.name;
}

std::istream& operator>> (std::istream& in, Department& me) {
  in >> me.departmentId;
  in.ignore(500, '\n');
  std::getline(in, me.name);
  return in;
}
