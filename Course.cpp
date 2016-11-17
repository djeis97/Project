#include "Course.hpp"

#include <string.h>

Course::Course (int myId, std::string myLevel)
  : courseId(myId), level(myLevel) {
}

int Course::getCourseId () {
  return courseId;
}

int Course::getStudentGrade (int studentId) {
  return grades.at(studentId);
}
