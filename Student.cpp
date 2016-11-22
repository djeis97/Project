#include "Student.hpp"
#include "Person.hpp"
#include "Date.hpp"

#include <string.h>
#include <iostream>
#include <vector>
#include <map>


Student::Student () {}

Student::Student (std::string myName, int id, Date bDate,
         std::string myGender, int departmentId,
                  std::vector<int> myCourses, std::string myLevel, std::string myRole,
                  std::vector<int> myCoursesAssisting)
  : Person(myName, id, bDate, myGender, departmentId),
    courses(myCourses), level(myLevel), role(myRole),
    coursesAssisting(myCoursesAssisting) {}

std::string Student::getLevel () const {
  return level;
}
void Student::setLevel (std::string newLevel) {
  level = newLevel;
}

std::vector<int>::const_iterator Student::coursesBegin () const {
  return courses.cbegin();
}

std::vector<int>::const_iterator Student::coursesEnd () const {
  return courses.cend();
}

std::vector<int>::const_iterator Student::coursesAssistingBegin () const {
  return coursesAssisting.cbegin();
}

std::vector<int>::const_iterator Student::coursesAssistingEnd () const {
  return coursesAssisting.cend();
}

std::ostream& operator<< (std::ostream& out, const Student& me) {
  out << static_cast<const Person&>(me)
      << me.level << std::endl
      << me.courses.size();
  for (auto it = me.courses.begin(); it != me.courses.end(); ++it)
    out << " " << *it;
  out << std::endl
      << me.role << std::endl
      << me.coursesAssisting.size();
  for (auto it = me.coursesAssisting.begin(); it != me.coursesAssisting.end(); ++it)
    out << " " << *it;
  return out << std::endl;
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
