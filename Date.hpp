#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date
{
public:
  Date (int day, int month, int year);
  virtual ~Date ();
  int getDay ();
  int getMonth ();
  int getYear ();
  std::ostream& print (std::ostream& out);
private:
  int day;
  int month;
  int year;
};


#endif /* DATE_H */
