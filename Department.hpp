#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string.h>
#include <iostream>

class Department
{
public:
  Department (std::string myName);
  virtual ~Department ();

  std::string getName ();

  std::ostream& operator<< (std::ostream& out);
private:
  std::string name;
};


#endif /* DEPARTMENT_H */
