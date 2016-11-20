#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date
{
public:
  Date (int day, int month, int year);
  int getDay ();
  int getMonth ();
  int getYear ();
private:
  int day;
  int month;
  int year;
  friend std::ostream& operator<< (std::ostream& out, Date& me);
};


#endif /* DATE_H */
