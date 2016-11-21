#include <string.h>
#include <iostream>

#include "Person.hpp"
#include "DataObject.hpp"

Person::Person (std::string myName, int id, Date bDate,
                std::string myGender, int myDepartmentId, DataObject *myDataObject)
  : name(myName), universityID(id), birthDate(bDate),
    gender(myGender), departmentId(myDepartmentId),
    dataObject(myDataObject) {
}

Person::Person (DataObject *myDataObject)
  : universityID(0),  dataObject(myDataObject) {
}

Person::~Person () {
}

std::string Person::getName () {
  return name;
}

void Person::setName (std::string newName) {
  name = newName;
}

int Person::getID () {
  return universityID;
}
void Person::setID (int newID) {
  universityID = newID;
}

Date Person::getBirthDate () {
  return birthDate;
}
void Person::setBirthDate (Date newBirthDate) {
  birthDate = newBirthDate;
}

std::string Person::getGender () {
  return gender;
}
void Person::setGender (std::string newGender) {
  gender = newGender;
}

std::ostream& operator<< (std::ostream& out, Person& me) {
  return out << me.universityID << std::endl
             << me.name << std::endl
             << me.birthDate << std::endl
             << me.gender << std::endl
             << me.departmentId << std::endl;
}

std::istream& operator>> (std::istream& in, Person& me) {
  me.dataObject->removePerson(&me);
  in >> me.universityID;
  in.ignore(500, '\n');
  std::getline(in, me.name);
  in >> me.birthDate;
  in.ignore(500, '\n');
  std::getline(in, me.gender);
  in >> me.departmentId;
  me.dataObject->addPerson(&me);


  return in;
}
