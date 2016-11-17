#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string.h>
#include <iostream>

#include "DataObject.hpp"

class DataObject;

class Department
{
public:
  Department (int myId, std::string myName);
  virtual ~Department ();

  std::string getName ();
  int getDepartmentId ();

  std::ostream& operator<< (std::ostream& out);
private:
  int departmentId;
  std::string name;
  DataObject* dataObject;
};


#endif /* DEPARTMENT_H */
