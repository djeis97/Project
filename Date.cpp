#include "Date.hpp"

Date::Date ()
  : day(0), month(0), year(0) {}

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

std::istream& operator>> (std::istream& in, Date& me) {
  return in >> me.day >> me.month >> me.year;
}
