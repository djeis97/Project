#ifndef STUDENT_H
#define STUDENT_H

#include "Person.hpp"
#include "Date.hpp"

#include <string.h>
#include <set>
#include <iostream>

class Student : public Person
{
public:
  Student ();
  Student (std::string myName, int id, Date bDate,
           std::string myGender, int departmentId,
           std::set<int> myCourses, std::string myLevel, std::string myRole,
           std::set<int> myCoursesAssisting);

  std::string getLevel () const;
  void setLevel (std::string newLevel);

  std::string getRole () const;

  const std::set<int>& getCourses () const;
  const std::set<int>& getCoursesAssisting () const;

private:
  std::set<int> courses;
  std::string level;
  std::string role;
  std::set<int> coursesAssisting;
  friend std::ostream& operator<< (std::ostream& out, const Student& me);
  friend std::istream& operator>> (std::istream& out, Student& me);
};


#endif /* STUDENT_H */
