#ifndef DATAOBJECT_H
#define DATAOBJECT_H

#include "Person.hpp"
#include "Department.hpp"
#include "Course.hpp"

class Person;
class Department;
class Course;

#include <vector>

class DataObject
{
public:
  DataObject();
  virtual ~DataObject();

  Person* getPersonById (int id);
  Department* getDepartmentById (int id);
  Course* getCourseById (int id);

  void addPerson (Person* newPerson);
  void addDepartment (Department* newDepartment);
  void addCourse (Course* newCourse);

private:
  std::vector<Person *> people;
  std::vector<Department *> departments;
  std::vector<Course *> courses;
};


#endif /* DATAOBJECT_H */
