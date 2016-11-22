#include <string.h>
#include <iostream>

#include "Person.hpp"

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

void Person::setName (std::string newName) {
  name = newName;
}

int Person::getID () const {
  return universityID;
}
void Person::setID (int newID) {
  universityID = newID;
}

Date Person::getBirthDate () const {
  return birthDate;
}
void Person::setBirthDate (Date newBirthDate) {
  birthDate = newBirthDate;
}

std::string Person::getGender () const {
  return gender;
}
void Person::setGender (std::string newGender) {
  gender = newGender;
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
