#include "DataObject.hpp"
#include "Person.hpp"
#include "Department.hpp"
#include "Course.hpp"

#include <map>

Person* DataObject::getPersonById (int id) const {
  return (id==0) ? nullptr : people.at(id);
}
Department* DataObject::getDepartmentById (int id) const {
  return (id==0) ? nullptr : departments.at(id);
}
Course* DataObject::getCourseById (int id) const {
  return (id==0) ? nullptr : courses.at(id);
}

void DataObject::addPerson (Person* newPerson) {
  people[newPerson->getID()] = newPerson;
}
void DataObject::addDepartment (Department* newDepartment) {
  departments[newDepartment->getDepartmentId()] = newDepartment;
}
void DataObject::addCourse (Course* newCourse) {
  courses[newCourse->getCourseId()] = newCourse;
}

void DataObject::removePerson (Person* newPerson) {
  people.erase(newPerson->getID());
}
void DataObject::removeDepartment (Department* newDepartment) {

  departments.erase(newDepartment->getDepartmentId());
}
void DataObject::removeCourse (Course* newCourse) {
  courses.erase(newCourse->getCourseId());
}

std::map<int, Person*>::const_iterator DataObject::personBegin () const {
  return people.cbegin();
}

std::map<int, Person*>::const_iterator DataObject::personEnd () const {
  return people.cend();
}

std::map<int, Department*>::const_iterator DataObject::departmentBegin () const {
  return departments.cbegin();
}

std::map<int, Department*>::const_iterator DataObject::departmentEnd () const {
  return departments.cend();
}

std::map<int, Course*>::const_iterator DataObject::courseBegin () const {
  return courses.cbegin();
}

std::map<int, Course*>::const_iterator DataObject::courseEnd () const {
  return courses.cend();
}
