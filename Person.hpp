#ifndef PERSON_H
#define PERSON_H

#include <string>

#include "Date.hpp"

class Person
{
public:
  Person ();
  Person(std::string myName, int id, Date bDate,
         std::string myGender, int departmentId);

  //! Destructor
  virtual ~Person();

  // Getters for person members
  std::string getName () const;
  int getID () const;
  Date getBirthDate () const;
  std::string getGender () const;
  int getDepartmentId () const;


private:
  std::string name; // full name
  int universityID; // Unique ID for person in university
  Date birthDate; // Birth date of person
  std::string gender; // Gender of person
  int departmentId; // ID of Department person is a member of

  // Debug printer for Person class
  friend std::ostream& operator<< (std::ostream&, const Person& me);
  // Record parser for Person class
  friend std::istream& operator>> (std::istream&, Person& me);

};

#endif /* PERSON_H */
