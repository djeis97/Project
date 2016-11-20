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
  people.at(newPerson->getID()) = newPerson;
}
void DataObject::addDepartment (Department* newDepartment) {
  departments.at(newDepartment->getDepartmentId()) = newDepartment;
}
void DataObject::addCourse (Course* newCourse) {
  courses.at(newCourse->getCourseId()) = newCourse;
}
