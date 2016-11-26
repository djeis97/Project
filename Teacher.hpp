#ifndef TEACHER_H
#define TEACHER_H

#include "Person.hpp"
#include "Date.hpp"

#include <iostream>
#include <vector>
#include <string.h>

class Teacher : public Person
{
public:
  Teacher ();
  Teacher (std::string myName, int id, Date bDate,
           std::string myGender, int departmentId,
           std::string myTitle, std::vector<int> myCoursesTeaching);
  ~Teacher ();

  std::string getTitle () const;
  void setTitle (std::string newTitle);

  std::vector<int>::const_iterator coursesTeachingBegin () const;
  std::vector<int>::const_iterator coursesTeachingEnd () const;

  const std::vector<int>& getCoursesTeaching () const;

private:
  std::string title;
  std::vector<int> coursesTeaching;
  friend std::ostream& operator<< (std::ostream& out, const Teacher& me);
  friend std::istream& operator>> (std::istream& out, Teacher& me);
};


#endif /* TEACHER_H */
