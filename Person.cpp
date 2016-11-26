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

// Getters for person members.
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

// Person debug printer.
std::ostream& operator<< (std::ostream& out, const Person& me) {
  return out << me.universityID << std::endl
             << me.name << std::endl
             << me.birthDate << std::endl
             << me.gender << std::endl
             << me.departmentId << std::endl;
}

// Person record parser.
std::istream& operator>> (std::istream& in, Person& me) {
  in >> me.universityID; // Read ID
  in.ignore(500, '\n'); // Skip newline after int
  std::getline(in, me.name); // Read name
  in >> me.birthDate; // Read date
  in.ignore(500, '\n'); // Skip newline after int
  std::getline(in, me.gender); // Read gender
  in >> me.departmentId; // Read dept ID


  return in;
}
