#include "Teacher.hpp"
#include "DataObject.hpp"

#include <vector>


Teacher::Teacher (std::string myName, int id, Date bDate,
                  std::string myGender, int departmentId, DataObject *dataObject,
                  std::string myTitle, std::vector<int> myCoursesTeaching)
  : Person(myName, id, bDate, myGender, departmentId, dataObject),
    title(myTitle), coursesTeaching(myCoursesTeaching) {
}
Teacher::Teacher (DataObject *dataObject)
  : Person(dataObject) {}

std::string Teacher::getTitle () {
  return title;
}
void Teacher::setTitle (std::string newTitle) {
  title = newTitle;
}

std::ostream& operator<< (std::ostream& out, Teacher& me) {
  return out;
}
