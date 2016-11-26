#include "Teacher.hpp"
#include "Person.hpp"
#include "Date.hpp"

#include <set>

Teacher::Teacher () {}

Teacher::Teacher (std::string myName, int id, Date bDate,
                  std::string myGender, int departmentId,
                  std::string myTitle, std::set<int> myCoursesTeaching)
  : Person(myName, id, bDate, myGender, departmentId),
    title(myTitle), coursesTeaching(myCoursesTeaching) {
}

Teacher::~Teacher () {}

// Getters
std::string Teacher::getTitle () const {
  return title;
}

// Const reference getters for member collections
const std::set<int>& Teacher::getCoursesTeaching () const {
  return coursesTeaching;
}

// Debug printer for Teacher
std::ostream& operator<< (std::ostream& out, const Teacher& me) {
  out << dynamic_cast<const Person&>(me)
      << me.title << std::endl
      << me.coursesTeaching.size();
  for (auto it = me.coursesTeaching.begin(); it != me.coursesTeaching.end(); ++it)
    out << " " << *it;
  return out << std::endl;
}

// Parser for teacher records
std::istream& operator>> (std::istream& in, Teacher& me) {
  in >> static_cast<Person&>(me); // Parse Person data
  in.ignore(500, '\n'); // Skip newline after int
  std::getline(in, me.title); // Read teacher title
  int courseNum;
  in >> courseNum; // Read courses teaching
  for (int i=0; i < courseNum; i++){
    int courseId;
    in >> courseId;
    me.coursesTeaching.insert(courseId);
  }

  return in;
}

