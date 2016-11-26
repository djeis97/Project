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

  // Member getters
  std::string getLevel () const;
  std::string getRole () const;

  // Const reference getters for member collections.
  const std::set<int>& getCourses () const;
  const std::set<int>& getCoursesAssisting () const;

private:
  std::set<int> courses; // Courses a student is taking
  std::string level; // Degree the student is seaking
  std::string role; // Job (TA or RA)
  std::set<int> coursesAssisting; // Courses a student is assisting (if TA)

  // Debug printer for Students
  friend std::ostream& operator<< (std::ostream& out, const Student& me);
  // Parser for student records
  friend std::istream& operator>> (std::istream& out, Student& me);
};


#endif /* STUDENT_H */
