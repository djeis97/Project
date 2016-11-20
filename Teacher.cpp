#include "Teacher.hpp"
#include "DataObject.hpp"


Teacher::Teacher (std::string myName, int id, Date bDate,
                  std::string myGender, int departmentId, DataObject *dataObject,
                  std::string myTitle, int myCourseTeaching)
  : Person(myName, id, bDate, myGender, departmentId, dataObject),
    title(myTitle), courseTeaching(myCourseTeaching) {
}

std::string Teacher::getTitle () {
  return title;
}
void Teacher::setTitle (std::string newTitle) {
  title = newTitle;
}

std::ostream& operator<< (std::ostream& out, Teacher& me) {
  return out;
}
