#include "Course.hpp"
#include "DataObject.hpp"

#include <string.h>

Course::Course (int myId, std::string myName, std::string myLevel, DataObject *myDataObject)
  : courseId(myId), name(myName), level(myLevel), dataObject(myDataObject) {
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
