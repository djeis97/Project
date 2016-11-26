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

  std::string getTitle () const;
  void setTitle (std::string newTitle);

  const std::set<int>& getCoursesTeaching () const;

private:
  std::string title;
  std::set<int> coursesTeaching;
  friend std::ostream& operator<< (std::ostream& out, const Teacher& me);
  friend std::istream& operator>> (std::istream& out, Teacher& me);
};


#endif /* TEACHER_H */
