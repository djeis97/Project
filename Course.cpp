#include "Course.hpp"

#include <string.h>
#include <iostream>

Course::Course () {}

Course::Course (int myId, std::string myName, std::string myLevel,
                int myDepartmentId, std::map<int, int> myGrades)
  : courseId(myId), name(myName), level(myLevel), departmentId(myDepartmentId),
    grades(myGrades) {
}

Course::~Course () {
}

// Member getters
int Course::getCourseId () const {
  return courseId;
}
const std::string& Course::getName () const {
  return name;
}
const std::string& Course::getLevel () const {
  return level;
}
int Course::getDepartmentId () const {
  return departmentId;
}

// Const getters for member collections
const std::map<int, int>& Course::getGrades () const {
  return grades;
}

// Parser
std::istream& operator>> (std::istream& in, Course &me) {
  in >> me.courseId; // Read courseId
  in.ignore(500, '\n'); // Skip newline after int
  std::getline(in, me.name); // Read name
  std::getline(in, me.level); // Read course level
  in >> me.departmentId; // Read department ID
  int studentNum;
  in >> studentNum; // Read students (and respective grades) in course
  for (int i=0; i < studentNum; i++) {
    int studentId, studentGrade;
    in >> studentId >> studentGrade;
    me.grades[studentId] = studentGrade;
  }
  return in;
}
