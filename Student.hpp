#ifndef STUDENT_H
#define STUDENT_H

#include "Person.hpp"

#include <string.h>
#include <vector>
#include <iostream>

class Student : public Person
{
public:
  Student (std::string myName, int id, Date bDate,
           std::string myGender, int departmentId, DataObject *myDataObject,
           std::vector<int> myCourses, std::string myLevel, std::string myRole,
           std::vector<int> myCoursesAssisting);
  Student (DataObject *myDataObject);

  std::string getLevel ();
  void setLevel (std::string newLevel);

private:
  std::vector<int> courses;
  std::string level;
  std::string role;
  std::vector<int> coursesAssisting;
  friend std::ostream& operator<< (std::ostream& out, Student& me);
  friend std::istream& operator>> (std::istream& out, Student& me);
};


#endif /* STUDENT_H */
