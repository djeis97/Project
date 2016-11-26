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

int Course::getCourseId () const {
  return courseId;
}

std::string Course::getName () const {
  return name;
}

int Course::getStudentGrade (int studentId) {
  return grades.at(studentId);
}

const std::map<int, int>& Course::getGrades () const {
  return grades;
}

std::istream& operator>> (std::istream& in, Course &me) {
  in >> me.courseId;
  in.ignore(500, '\n');
  std::getline(in, me.name);
  std::getline(in, me.level);
  in >> me.departmentId;
  int studentNum;
  in >> studentNum;
  for (int i=0; i < studentNum; i++) {
    int studentId, studentGrade;
    in >> studentId >> studentGrade;
    me.grades[studentId] = studentGrade;
  }
  return in;
}
