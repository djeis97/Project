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
  virtual ~Person() noexcept;

  std::string getName () const;
  void setName (std::string newName);

  int getID () const;
  void setID (int newID);

  Date getBirthDate () const;
  void setBirthDate (Date newBirthDate);

  std::string getGender () const;
  void setGender (std::string newGender);

  int getDepartmentId () const;


private:
  std::string name;
  int universityID;
  Date birthDate;
  std::string gender;
  int departmentId;
  friend std::ostream& operator<< (std::ostream&, const Person& me);
  friend std::istream& operator>> (std::istream&, Person& me);

};

#endif /* PERSON_H */
