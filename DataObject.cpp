#include "DataObject.hpp"
#include "Person.hpp"
#include "Department.hpp"
#include "Course.hpp"

#include <map>

Person* DataObject::getPersonById (int id) {
  return (id==0) ? nullptr : people.at(id);
}
Department* DataObject::getDepartmentById (int id) {
  return (id==0) ? nullptr : departments.at(id);
}
Course* DataObject::getCourseById (int id) {
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
