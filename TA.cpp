#include "TA.hpp"

TA::TA (std::string myName, int id, Date bDate,
        std::string myGender, int departmentId, DataObject *myDataObject,
        int myCourse, std::string myLevel, int myCourseAssisting)
  : Student(myName, id, bDate, myGender, departmentId, myDataObject, myCourse, myLevel),
    courseAssisting(myCourseAssisting) {

}
