#include "DataObject.hpp"
#include "Person.hpp"
#include "Teacher.hpp"
#include "Student.hpp"
#include "Department.hpp"
#include "Course.hpp"

#include <iostream>
#include <fstream>


int main()
{
  DataObject dataObject;
  std::ifstream students("Students.txt");
  while (!(students.eof())) {
    Student *s = new Student (&dataObject);
    students >> *s;
    students.ignore(500, '\n');
  }
  std::ifstream teachers("Teachers.txt");
  while (!(teachers.eof())) {
    Teacher *s = new Teacher (&dataObject);
    teachers >> *s;
    teachers.ignore(500, '\n');
  }
  std::cout << *dynamic_cast<Teacher*>(dataObject.getPersonById(100)) << std::endl;

  return 0;
}
