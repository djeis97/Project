#ifndef STUDENT_H
#define STUDENT_H

#include "Person.hpp"
#include "Date.hpp"

#include <string.h>
#include <vector>
#include <iostream>

class Student : public Person
{
public:
  Student ();
  Student (std::string myName, int id, Date bDate,
           std::string myGender, int departmentId,
           std::vector<int> myCourses, std::string myLevel, std::string myRole,
           std::vector<int> myCoursesAssisting);

  std::string getLevel () const;
  void setLevel (std::string newLevel);

  std::vector<int>::const_iterator coursesBegin () const;
  std::vector<int>::const_iterator coursesEnd () const;
  std::vector<int>::const_iterator coursesAssistingBegin () const;
  std::vector<int>::const_iterator coursesAssistingEnd () const;

private:
  std::vector<int> courses;
  std::string level;
  std::string role;
  std::vector<int> coursesAssisting;
  friend std::ostream& operator<< (std::ostream& out, const Student& me);
  friend std::istream& operator>> (std::istream& out, Student& me);
};


#endif /* STUDENT_H */
