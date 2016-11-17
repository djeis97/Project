#include "DataObject.hpp"
#include "Person.hpp"
#include "Department.hpp"
#include "Course.hpp"

#include <vector>

Person* DataObject::getPersonById (int id) {
  return people.at(id);
}
Department* DataObject::getDepartmentById (int id) {
  return departments.at(id);
}
Course* DataObject::getCourseById (int id) {
  return courses.at(id);
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
