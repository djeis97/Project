#include "DataObject.hpp"
#include "Person.hpp"
#include "Department.hpp"
#include "Course.hpp"

#include <vector>

Person* DataObject::getPersonById (int id) {
  return (id==0) ? nullptr : people.at(id-1);
}
Department* DataObject::getDepartmentById (int id) {
  return (id==0) ? nullptr : departments.at(id-1);
}
Course* DataObject::getCourseById (int id) {
  return (id==0) ? nullptr : courses.at(id-1);
}

void DataObject::addPerson (Person* newPerson) {
  people.at(newPerson->getID()-1) = newPerson;
}
void DataObject::addDepartment (Department* newDepartment) {
  departments.at(newDepartment->getDepartmentId()-1) = newDepartment;
}
void DataObject::addCourse (Course* newCourse) {
  courses.at(newCourse->getCourseId()-1) = newCourse;
}
