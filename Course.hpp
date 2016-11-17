#ifndef COURSE_H
#define COURSE_H

#include "DataObject.hpp"

class DataObject;

class Course
{
public:
  Course (int myId);
  virtual ~Course ();

  int getCourseId ();

private:
  int courseId;
  DataObject *dataObject;
};


#endif /* COURSE_H */
