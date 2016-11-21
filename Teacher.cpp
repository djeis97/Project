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
  out << static_cast<Person&>(me)
      << me.title << std::endl
      << me.coursesTeaching.size();
  for (auto it = me.coursesTeaching.begin(); it != me.coursesTeaching.end(); ++it)
    out << " " << *it;
  return out << std::endl;
}

std::istream& operator>> (std::istream& in, Teacher& me) {
  in >> static_cast<Person&>(me);
  in.ignore(500, '\n');
  std::getline(in, me.title);
  int courseNum;
  in >> courseNum;
  me.coursesTeaching.resize(courseNum);
  for (int i=0; i < courseNum; i++)
    in >> me.coursesTeaching.at(i);

  return in;
}

