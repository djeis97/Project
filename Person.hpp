#ifndef PERSON_H
#define PERSON_H

#include <string>

#include "Date.hpp"
#include "DataObject.hpp"

class DataObject;

class Person
{
public:
  //! Default constructor
  Person(std::string myName, int id, Date bDate,
         std::string myGender, int departmentId, DataObject *myDataObject);

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

  virtual std::ostream& operator<< (std::ostream&);

private:
  std::string name;
  int universityID;
  Date birthDate;
  std::string gender;
  int departmentId;
  DataObject *dataObject;

};

#endif /* PERSON_H */
