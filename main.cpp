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

void displayPerson (std::ostream& out, const DataObject& dataObject, const Person& person) {
  out
    << "Name: " << person.getName() << std::endl
    << "University ID: " << person.getID() << std::endl
    << "Birth Date: " << person.getBirthDate() << std::endl
    << "Gender: " << person.getGender() << std::endl
    << "Department: " << dataObject.getDepartments().at(person.getDepartmentId())->getName()
    << std::endl;
}

void displayStudent (std::ostream& out, const DataObject& dataObject, const Student& student)
{
  displayPerson(out, dataObject, student);
  out << "Degree level: " << student.getLevel() << std::endl;

  out << "Courses:" << std::endl;
  std::for_each(student.getCourses().cbegin(),
                student.getCourses().cend(),
                [&] (int courseId) {
                  out << "\t" << dataObject.getCourses().at(courseId)->getName() << std::endl;}
                );
  out << "Job: " << student.getRole() << std::endl;
  auto coursesAssisting = student.getCoursesAssisting();
  if (coursesAssisting.cbegin() != coursesAssisting.cend()) {
    out << "Assisting Courses:" << std::endl;
    std::for_each(coursesAssisting.cbegin(),
                  coursesAssisting.cend(),
                  [&] (int courseId) {
                    out << "\t" << dataObject.getCourses().at(courseId)->getName() << std::endl;}
                  );
    out << std::endl;
  }
}

void displayTeacher (std::ostream& out, const DataObject& dataObject, const Teacher& teacher) {
  displayPerson(out, dataObject, teacher);
  out << "Title: " << teacher.getTitle() << std::endl;
  out << "Teaching Courses: " << std::endl;
  std::for_each(teacher.getCoursesTeaching().cbegin(),
                teacher.getCoursesTeaching().cend(),
                [&] (int courseId) {
                  out << "\t" << dataObject.getCourses().at(courseId)->getName() << std::endl;}
                );
  out << std::endl;
}

void displayPersonDispatch (std::ostream& out, const DataObject& dataObject, const Person& person) {
  Student const* s = dynamic_cast<Student const *>(&person);
  if (s!=nullptr) {
    displayStudent(out, dataObject, *s);
  }
  Teacher const* t = dynamic_cast<Teacher const *>(&person);
  if (t!=nullptr) {
    displayTeacher(out, dataObject, *t);
  }
}

void displayCourse (std::ostream& out, const DataObject& dataObject, const Course& course) {
  out << course.getName() << std::endl
      << "Department: " << dataObject.getDepartments().at(course.getDepartmentId())->getName()
      << std::endl
      << "Level: " << course.getLevel() << std::endl
      << "Teachers:" << std::endl;
  auto people = dataObject.getPeople();
  std::for_each(people.cbegin(),
                people.cend(),
                [&] (std::pair<int, Person*> p) {
                  auto t = dynamic_cast<Teacher*>(p.second);
                  if ((t!=nullptr)) {
                    auto coursesTeaching = t->getCoursesTeaching();
                    if (coursesTeaching.find(course.getCourseId())!=coursesTeaching.cend())
                      out << "\t" << t->getName() << " (" << t->getID() << ")"
                          << std::endl;
                  }
                });
  out << "Teaching Assistents:" << std::endl;
  std::for_each(people.cbegin(),
                people.cend(),
                [&] (std::pair<int, Person*> p) {
                  auto s = dynamic_cast<Student*>(p.second);
                  if ((s!=nullptr)) {
                    auto coursesTeaching = s->getCoursesAssisting();
                    if (coursesTeaching.find(course.getCourseId())!=coursesTeaching.cend())
                      out << "\t" << s->getName() << " (" << s->getID() << ")"
                          << std::endl;
                  }
                });
  out << "Student grades: " << std::endl;
  std::for_each(course.getGrades().cbegin(),
                course.getGrades().cend(),
                [&] (std::pair<int, int> p) {
                  auto s = dynamic_cast<Student*>(dataObject.getPeople().at(p.first));
                  out << "\t" << s->getName() << " (" << s->getID() << ")"
                      << ": " << p.second << "%" << std::endl;
                });

}

void displayDepartment (std::ostream& out, const DataObject& dataObject, const Department& dep) {
  out << dep.getName() << std::endl;
  auto people = dataObject.getPeople();
  out << "Teachers:" << std::endl;
  std::for_each(people.cbegin(),
                people.cend(),
                [&] (std::pair<int, Person*> p) {
                  auto t = dynamic_cast<Teacher*>(p.second);
                  if ((t!=nullptr)) {
                    if (t->getDepartmentId()==dep.getDepartmentId())
                      out << "\t" << t->getName() << " (" << t->getID() << ")"
                          << std::endl;
                  }
                });
  out << "Students:" << std::endl;
  std::for_each(people.cbegin(),
                people.cend(),
                [&] (std::pair<int, Person*> p) {
                  auto t = dynamic_cast<Student*>(p.second);
                  if ((t!=nullptr)) {
                    if (t->getDepartmentId()==dep.getDepartmentId())
                      out << "\t" << t->getName() << " (" << t->getID() << ")"
                          << std::endl;
                  }
                });
  out << "Courses:" << std::endl;
  std::for_each(dataObject.getCourses().cbegin(),
                dataObject.getCourses().cend(),
                [&] (std::pair<int, Course*> c) {
                  if (c.second->getDepartmentId()==dep.getDepartmentId())
                    out << "\t" << c.second->getName() << " (" << c.second->getCourseId() << ")"
                        << std::endl;
                });

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

  std::cout << "Enter a person ID: ";
  int personId;
  std::cin >> personId;
  displayPersonDispatch(std::cout, dataObject,
                        *dataObject.getPeople().at(personId));
  std::cout << "Enter a course ID: ";
  int courseId;
  std::cin >> courseId;
  displayCourse(std::cout, dataObject, *dataObject.getCourses().at(courseId));

  std::cout << "Enter a department ID: ";
  int departmentId;
  std::cin >> departmentId;
  displayDepartment(std::cout, dataObject, *dataObject.getDepartments().at(departmentId));

  return 0;
}
