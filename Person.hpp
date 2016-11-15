#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Date.hpp"

class Person
{
public:
  //! Default constructor
  Person(std::string, int id, int bDate, int gender);

  //! Destructor
  virtual ~Person() noexcept;

  std::string getName ();
  void setName (std::string newName);

  int getID ();
  void setID (int newID);

  Date getBirthDate ();
  void setBirthDate (Date newBirthDate);

  std::string getGender ();
  void setGender (std::string newGender);

private:
  std::string name;
  int UniversityID;
  Date birthDate;
  std::string gender;

};

#endif /* PERSON_H */
