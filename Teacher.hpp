#ifndef TEACHER_H
#define TEACHER_H

#include "Person.hpp"
#include "Date.hpp"

#include <iostream>
#include <set>
#include <string.h>

class Teacher : public Person
{
public:
  Teacher ();
  Teacher (std::string myName, int id, Date bDate,
           std::string myGender, int departmentId,
           std::string myTitle, std::set<int> myCoursesTeaching);
  ~Teacher ();

  // Member getters
  std::string getTitle () const;

  // Const reference getters for member collections
  const std::set<int>& getCoursesTeaching () const;

private:
  std::string title; // Teaching level (ie. Adjunct)
  std::set<int> coursesTeaching; // Courses the teacher is teaching

  // Debug printer for Teacher
  friend std::ostream& operator<< (std::ostream& out, const Teacher& me);
  // Parser for teacher records
  friend std::istream& operator>> (std::istream& out, Teacher& me);
};


#endif /* TEACHER_H */
