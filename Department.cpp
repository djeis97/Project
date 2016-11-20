#include "Department.hpp"
#include "DataObject.hpp"

#include <iostream>
#include <string.h>

Department::Department (int myId, std::string myName, DataObject *myDataObject)
  : departmentId(myId), name(myName), dataObject(myDataObject) {
  dataObject->addDepartment(this);
}

Department::Department (DataObject *myDataObject)
  : dataObject(myDataObject) {
  dataObject->addDepartment(this);
}

Department::~Department () {
  dataObject->removeDepartment(this);
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
  me.dataObject->removeDepartment(&me);
  in >> me.departmentId;
  in.ignore(500, '\n');
  std::getline(in, me.name);
  me.dataObject->addDepartment(&me);
  return in;
}
