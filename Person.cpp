#include <string.h>

#include "Person.hpp"
#include "DataObject.hpp"

Person::Person (std::string myName, int id, Date bDate,
                std::string myGender, DataObject *myDataObject)
  : name(myName), universityID(id), birthDate(bDate),
    gender(myGender), dataObject(myDataObject) {
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
