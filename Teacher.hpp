#ifndef TEACHER_H
#define TEACHER_H

#include "Person.hpp"
#include "Date.hpp"
#include "DataObject.hpp"

#include <iostream>
#include <string.h>

class Teacher : Person
{
public:
  Teacher (std::string myName, int id, Date bDate,
           std::string myGender, int departmentId, DataObject *dataObject,
           std::string myTitle, int courseTeaching);
  virtual ~Teacher ();

  std::string getTitle ();
  void setTitle (std::string newTitle);

  virtual std::ostream& operator<< (std::ostream& out);

private:
  std::string title;
  int courseTeaching;
};


#endif /* TEACHER_H */
