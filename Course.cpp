#include "Course.hpp"

Course::Course (int myId)
  : courseId(myId) {
}

int Course::getCourseId () {
  return courseId;
}
