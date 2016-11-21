#include "Course.hpp"
#include "DataObject.hpp"

#include <string.h>
#include <iostream>

Course::Course (int myId, std::string myName, std::string myLevel,
                int myDepartmentId, std::map<int, int> myGrades,
                DataObject *myDataObject)
  : courseId(myId), name(myName), level(myLevel), departmentId(myDepartmentId),
    grades(myGrades), dataObject(myDataObject) {
  dataObject->addCourse(this);
}

Course::Course (DataObject *myDataObject)
  : dataObject(myDataObject) {
  dataObject->addCourse(this);
}

Course::~Course () {
  dataObject->removeCourse(this);
}

int Course::getCourseId () {
  return courseId;
}

int Course::getStudentGrade (int studentId) {
  return grades.at(studentId);
}

std::istream& operator>> (std::istream& in, Course &me) {
  in >> me.courseId;
  in.ignore(500, '\n');
  std::getline(in, me.name);
  std::getline(in, me.level);
  int studentNum;
  in >> studentNum;
  for (int i=0; i < studentNum; i++)
    in >> me.grades[i];
  return in;
}
