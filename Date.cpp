#include "Date.hpp"

Date::Date (int day, int month, int year) {
  this->day = day;
  this->month = month;
  this->year = year;
}

int Date::getDay () {
  return day;
}

int Date::getMonth () {
  return month;
}

int Date::getYear () {
  return year;
}

std::ostream& operator<< (std::ostream& out, Date& me) {
  return out << me.day << "/" << me.month << "/" << me.year;
}
