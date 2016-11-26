#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string.h>
#include <iostream>

class Department
{
public:
  Department ();
  Department (int myId, std::string myName);
  virtual ~Department ();

  std::string getName () const;
  int getDepartmentId () const;

private:
  int departmentId;
  std::string name;
  friend std::ostream& operator<< (std::ostream& out, const Department& me);
  friend std::istream& operator>> (std::istream& out, Department& me);
};


#endif /* DEPARTMENT_H */
