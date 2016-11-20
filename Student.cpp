#include "Student.hpp"

#include <string.h>
#include <iostream>
#include <vector>
#include <map>

Student::Student (std::string myName, int id, Date bDate,
         std::string myGender, int departmentId, DataObject *myDataObject,
                  std::vector<int> myCourses, std::string myLevel, std::string myRole,
                  std::vector<int> myCoursesAssisting)
  : Person(myName, id, bDate, myGender, departmentId, myDataObject),
    courses(myCourses), level(myLevel), role(myRole),
    coursesAssisting(myCoursesAssisting) {}

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
  in.ignore(500, '\n');
  std::getline(in, me.level);
  int courseNum = 0;
  in >> courseNum;
  me.courses.resize(courseNum);
  for(int i=0; i<courseNum; i++)
    in >> me.courses.at(i);
  in.ignore(500, '\n');
  std::getline(in, me.role);
  in >> courseNum;
  me.coursesAssisting.resize(courseNum);
  for (int i=0; i < courseNum; i++)
    in >> me.coursesAssisting.at(i);

  return in;
}
