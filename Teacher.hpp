#ifndef TEACHER_H
#define TEACHER_H

#include "Person.hpp"
#include "Date.hpp"
#include "DataObject.hpp"

#include <iostream>
#include <string.h>

class Teacher : public Person
{
public:
  Teacher (std::string myName, int id, Date bDate,
           std::string myGender, int departmentId, DataObject *dataObject,
           std::string myTitle, int courseTeaching);
  virtual ~Teacher ();

  std::string getTitle ();
  void setTitle (std::string newTitle);


private:
  std::string title;
  int courseTeaching;
  friend std::ostream& operator<< (std::ostream& out, Teacher& me);
};


#endif /* TEACHER_H */
