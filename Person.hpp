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

  int getID () const;

  Date getBirthDate () const;

  std::string getGender () const;

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
