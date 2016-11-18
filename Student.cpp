#include "Student.hpp"

#include <string.h>
#include <map>

Student::Student (std::string myName, int id, Date bDate,
         std::string myGender, int departmentId, DataObject *myDataObject,
         int myCourse, std::string myLevel)
  : Person(myName, id, bDate, myGender, departmentId, myDataObject),
    courseId(myCourse), level(myLevel) {}

std::string Student::getLevel () {
  return level;
}
void Student::setLevel (std::string newLevel) {
  level = newLevel;
}
