#include "Student.hpp"
#include "Person.hpp"
#include "Date.hpp"

#include <string.h>
#include <iostream>
#include <set>
#include <map>


Student::Student () {}

Student::Student (std::string myName, int id, Date bDate,
         std::string myGender, int departmentId,
                  std::set<int> myCourses, std::string myLevel, std::string myRole,
                  std::set<int> myCoursesAssisting)
  : Person(myName, id, bDate, myGender, departmentId),
    courses(myCourses), level(myLevel), role(myRole),
    coursesAssisting(myCoursesAssisting) {}

// Member getters
std::string Student::getLevel () const {
  return level;
}
std::string Student::getRole () const {
  return role;
}

// Const reference getters for member collections.
const std::set<int>& Student::getCourses () const {
  return courses;
}
const std::set<int>& Student::getCoursesAssisting () const {
  return coursesAssisting;
}

// Debug printer for Students
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

// Parser for student records
std::istream& operator>> (std::istream& in, Student& me) {
  in >> static_cast<Person&>(me); // Parse Person data
  in.ignore(500, '\n'); // Skip newline after int

  std::getline(in, me.level); // Read degree level

  { // Read courses taking
    int courseNum;
    in >> courseNum;
    for(int i=0; i<courseNum; i++) {
      int courseId;
      in >> courseId;
      me.courses.insert(courseId);
    }
  }
  in.ignore(500, '\n'); // Skip newline after int

  std::getline(in, me.role); // Read role

  { // Read courses assisting
    int courseNum;
    in >> courseNum;
    for (int i=0; i < courseNum; i++) {
      int courseId;
      in >> courseId;
      me.coursesAssisting.insert(courseId);
    }
  }
  return in;
}
