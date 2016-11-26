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

  // Member getters
  int getCourseId () const;
  const std::string& getName () const;
  const std::string& getLevel () const;
  int getDepartmentId () const;

  // Const getters for member collections
  const std::map<int, int>& getGrades () const;

private:
  int courseId;
  std::string name;
  std::string level; // Undergraduate/Graduate
  int departmentId;
  std::map<int, int> grades; // Student IDs to Grades

  // Parser
  friend std::istream& operator>> (std::istream& out, Course& me);
};


#endif /* COURSE_H */
