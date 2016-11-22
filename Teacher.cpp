#include "Teacher.hpp"
#include "Person.hpp"
#include "Date.hpp"

#include <vector>

Teacher::Teacher () {}

Teacher::Teacher (std::string myName, int id, Date bDate,
                  std::string myGender, int departmentId,
                  std::string myTitle, std::vector<int> myCoursesTeaching)
  : Person(myName, id, bDate, myGender, departmentId),
    title(myTitle), coursesTeaching(myCoursesTeaching) {
}

Teacher::~Teacher () {}

std::string Teacher::getTitle () const {
  return title;
}
void Teacher::setTitle (std::string newTitle) {
  title = newTitle;
}

std::ostream& operator<< (std::ostream& out, const Teacher& me) {
  out << dynamic_cast<const Person&>(me)
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

