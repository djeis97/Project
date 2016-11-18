#ifndef TA_H
#define TA_H

#include "Student.hpp"

class TA : Student
{
public:
  TA (std::string myName, int id, Date bDate,
      std::string myGender, int departmentId, DataObject *myDataObject,
      int myCourse, std::string myLevel, int myCourseAssisting);
  virtual ~TA ();

private:
  int courseAssisting;
};


#endif /* TA_H */
