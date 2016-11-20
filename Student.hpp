#ifndef STUDENT_H
#define STUDENT_H

#include "Person.hpp"

#include <string.h>
#include <iostream>

class Student : public Person
{
public:
  Student (std::string myName, int id, Date bDate,
           std::string myGender, int departmentId, DataObject *myDataObject,
           int myCourse, std::string myLevel);
  Student (DataObject *myDataObject);
  virtual ~Student();

  std::string getLevel ();
  void setLevel (std::string newLevel);

private:
  int courseId;
  std::string level;
  friend std::ostream& operator<< (std::ostream& out, Student& me);
  friend std::istream& operator>> (std::istream& out, Student& me);
};


#endif /* STUDENT_H */
