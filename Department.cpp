#include "Department.hpp"
#include "DataObject.hpp"

#include <iostream>
#include <string.h>

Department::Department (int myId, std::string myName, DataObject *myDataObject)
  : departmentId(myId), name(myName), dataObject(myDataObject) {
}

Department::Department (DataObject *myDataObject)
  : dataObject(myDataObject) {
}

Department::~Department () {
}

std::string Department::getName () {
  return name;
}

int Department::getDepartmentId () {
  return departmentId;
}

std::ostream& operator<< (std::ostream& out, Department& me) {
  return out << "Department: " << me.name;
}

std::istream& operator>> (std::istream& in, Department& me) {
  in >> me.departmentId;
  in.ignore(500, '\n');
  std::getline(in, me.name);
  return in;
}
