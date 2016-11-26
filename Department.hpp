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

  // Member Getters
  std::string getName () const;
  int getDepartmentId () const;

private:
  int departmentId; // ID
  std::string name; // Name of department

  // Debug printer
  friend std::ostream& operator<< (std::ostream& out, const Department& me);
  // Parser
  friend std::istream& operator>> (std::istream& out, Department& me);
};


#endif /* DEPARTMENT_H */
