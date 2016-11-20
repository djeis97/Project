#ifndef COURSE_H
#define COURSE_H

#include "DataObject.hpp"

#include <map>
#include <string.h>
#include <iostream>

class DataObject;

class Course
{
public:
  Course (int myId, std::string myName, std::string myLevel,
          int myDepartmentId, std::map<int, int> myGrades,
          DataObject *myDataObject);
  Course (DataObject *myDataObject);
  virtual ~Course ();

  int getCourseId ();

private:
  int courseId;
  std::string name;
  std::string level;
  int departmentId;
  std::map<int, int> grades; // Student IDs to Grades
  DataObject *dataObject;

  int getStudentGrade (int studentId);
  friend std::ostream& operator<< (std::ostream& out, Course& me);
  friend std::istream& operator>> (std::istream& out, Course& me);
};


#endif /* COURSE_H */
