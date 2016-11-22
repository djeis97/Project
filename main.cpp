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
  {
    std::ifstream departments("Departments.txt");
    while (!(departments.eof())) {
      Department *d = new Department();
      departments >> *d;
      dataObject.addDepartment(d);
      departments.ignore(500, '\n');
    }
  }
  {
    std::ifstream students("Students.txt");
    while (!(students.eof())) {
      Student *s = new Student();
      students >> *s;
      dataObject.addPerson(s);
      students.ignore(500, '\n');
      students.ignore(500, '\n');
    }
  }
  {
    std::ifstream courses("Courses.txt");
    while (!(courses.eof())) {
      Course *c = new Course();
      courses >> *c;
      dataObject.addCourse(c);
      courses.ignore(500, '\n');
      courses.ignore(500, '\n');
    }
  }
  {
    std::ifstream teachers("Teachers.txt");
    while (!(teachers.eof())) {
      Teacher *t = new Teacher();
      teachers >> *t;
      dataObject.addPerson(t);
      teachers.ignore(500, '\n');
      teachers.ignore(500, '\n');
    }
  }
  std::cout << *dynamic_cast<Teacher*>(dataObject.getPersonById(100)) << std::endl;

  return 0;
}
