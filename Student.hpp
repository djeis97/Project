#ifndef STUDENT_H
#define STUDENT_H

#include "Person.hpp"

#include <string.h>

class Student : Person
{
public:
  Student (std::string myName, int id, Date bDate,
           std::string myGender, int departmentId, DataObject *myDataObject,
           int myCourse, std::string myLevel);
  virtual ~Student();

  std::string getLevel ();
  void setLevel (std::string newLevel);

private:
  int courseId;
  std::string level;
};


#endif /* STUDENT_H */
