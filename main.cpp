#include "DataObject.hpp"
#include "Person.hpp"
#include "Teacher.hpp"
#include "Student.hpp"
#include "Department.hpp"
#include "Course.hpp"

#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>

void displayPerson (std::ostream& out, DataObject const * dataObject, const Person& person) {
  out
    << "Name: " << person.getName() << std::endl
    << "University ID: " << person.getID() << std::endl
    << "Birth Date: " << person.getBirthDate() << std::endl
    << "Gender: " << person.getGender() << std::endl
    << "Department: " << dataObject->getDepartmentById(person.getDepartmentId())->getName()
    << std::endl;
}

void displayStudent (std::ostream& out, DataObject const * dataObject, const Student& student)
{
  displayPerson(out, dataObject, student);
  out << "Degree level: " << student.getLevel() << std::endl;

  out << "Courses:" << std::endl;
  std::for_each(student.coursesBegin(),
                student.coursesEnd(),
                [&] (int courseId) {
                  out << dataObject->getCourseById(courseId)->getName() << std::endl;}
                );
  out << std::endl;
  out << "Job: " << student.getRole() << std::endl;
  if (student.coursesAssistingBegin() != student.coursesAssistingEnd()) {
    out << "Assisting Courses:" << std::endl;
    std::for_each(student.coursesAssistingBegin(),
                  student.coursesAssistingEnd(),
                  [&] (int courseId) {
                    out << dataObject->getCourseById(courseId)->getName() << std::endl;}
                  );
    out << std::endl;
  }
}

void displayTeacher (std::ostream& out, DataObject* dataObject, const Teacher& teacher) {
  displayPerson(out, dataObject, teacher);
  out << "Title: " << teacher.getTitle() << std::endl;
  out << "Teaching Courses: " << std::endl;
  std::for_each(teacher.coursesTeachingBegin(),
                teacher.coursesTeachingEnd(),
                [&] (int courseId) {
                  out << dataObject->getCourseById(courseId)->getName() << std::endl;}
                );
  out << std::endl;
}

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
  std::cout << "Loaded Departments" << std::endl << std::flush;
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
  std::cout << "Loaded Students" << std::endl << std::flush;
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
  std::cout << "Loaded Courses" << std::endl << std::flush;
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
  std::cout << "Loaded Teachers" << std::endl << std::flush;
  displayTeacher(std::cout, &dataObject,
                 *dynamic_cast<const Teacher*>(dataObject.getPersonById(100)));

  return 0;
}
