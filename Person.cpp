#include <string.h>
#include <iostream>

#include "Person.hpp"
#include "Date.hpp"

Person::Person () {}

Person::Person (std::string myName, int id, Date bDate,
                std::string myGender, int myDepartmentId)
  : name(myName), universityID(id), birthDate(bDate),
    gender(myGender), departmentId(myDepartmentId) {
}

Person::~Person () {
}

std::string Person::getName () const {
  return name;
}

int Person::getID () const {
  return universityID;
}

Date Person::getBirthDate () const {
  return birthDate;
}

int Person::getDepartmentId () const {
  return departmentId;
}

std::ostream& operator<< (std::ostream& out, const Person& me) {
  return out << me.universityID << std::endl
             << me.name << std::endl
             << me.birthDate << std::endl
             << me.gender << std::endl
             << me.departmentId << std::endl;
}

std::istream& operator>> (std::istream& in, Person& me) {
  in >> me.universityID;
  in.ignore(500, '\n');
  std::getline(in, me.name);
  in >> me.birthDate;
  in.ignore(500, '\n');
  std::getline(in, me.gender);
  in >> me.departmentId;


  return in;
}
