#include "Student.hpp"

#include <string.h>
#include <iostream>
#include <map>

Student::Student (std::string myName, int id, Date bDate,
         std::string myGender, int departmentId, DataObject *myDataObject,
         int myCourse, std::string myLevel)
  : Person(myName, id, bDate, myGender, departmentId, myDataObject),
    courseId(myCourse), level(myLevel) {}

Student::Student (DataObject *myDataObject)
  : Person(myDataObject) {}

std::string Student::getLevel () {
  return level;
}
void Student::setLevel (std::string newLevel) {
  level = newLevel;
}

std::istream& operator>> (std::istream& in, Student& me) {
  in >> static_cast<Person&>(me);


  return in;
}
