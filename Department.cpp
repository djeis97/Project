#include "Department.hpp"

#include <iostream>
#include <string.h>

Department::Department () {}

Department::Department (int myId, std::string myName)
  : departmentId(myId), name(myName)  {
}

Department::~Department () {}

// Member getters
int Department::getDepartmentId () const {
  return departmentId;
}
std::string Department::getName () const {
  return name;
}

// Debug printer
std::ostream& operator<< (std::ostream& out, const Department& me) {
  return out << "Department: " << me.name;
}

// Parser
std::istream& operator>> (std::istream& in, Department& me) {
  in >> me.departmentId; // Read id
  in.ignore(500, '\n'); // Skip newline after int
  std::getline(in, me.name); // Read name
  return in;
}
