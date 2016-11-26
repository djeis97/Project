#ifndef COURSE_H
#define COURSE_H

#include <map>
#include <string.h>
#include <iostream>

class Course
{
public:
  Course ();
  Course (int myId, std::string myName, std::string myLevel,
          int myDepartmentId, std::map<int, int> myGrades);
  virtual ~Course ();

  int getCourseId () const;
  const std::string& getName () const;
  const std::string& getLevel () const;
  int getDepartmentId () const;
  int getStudentGrade (int studentId);


  const std::map<int, int>& getGrades () const;

private:
  int courseId;
  std::string name;
  std::string level;
  int departmentId;
  std::map<int, int> grades; // Student IDs to Grades

  friend std::ostream& operator<< (std::ostream& out, const Course& me);
  friend std::istream& operator>> (std::istream& out, Course& me);
};


#endif /* COURSE_H */
