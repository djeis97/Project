#ifndef DATAOBJECT_H
#define DATAOBJECT_H

#include "Person.hpp"
#include "Department.hpp"
#include "Course.hpp"

class Person;
class Department;
class Course;

#include <map>

class DataObject
{
public:

  Person* getPersonById (int id) const;
  Department* getDepartmentById (int id) const;
  Course* getCourseById (int id) const;

  void addPerson (Person* newPerson);
  void addDepartment (Department* newDepartment);
  void addCourse (Course* newCourse);
  void removePerson (Person* newPerson);
  void removeDepartment (Department* newDepartment);
  void removeCourse (Course* newCourse);
  std::map<int, Person*>::const_iterator personBegin () const;
  std::map<int, Person*>::const_iterator personEnd () const;
  std::map<int, Department*>::const_iterator departmentBegin() const;
  std::map<int, Department*>::const_iterator departmentEnd() const;
  std::map<int, Course*>::const_iterator courseBegin() const;
  std::map<int, Course*>::const_iterator courseEnd() const;

private:
  std::map<int, Person *> people;
  std::map<int, Department *> departments;
  std::map<int, Course *> courses;
};


#endif /* DATAOBJECT_H */
