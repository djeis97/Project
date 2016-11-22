#Comment
CC=g++
CFLAGS=-Wall -std=c++11

all: Project

Project: main.o Date.o DataObject.o Course.o Department.o Person.o Teacher.o Student.o
	$(CC) $(CFLAGS) main.o Date.o DataObject.o Course.o Department.o Person.o Teacher.o Student.o -o Project

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

%.cpp: %.hpp

DataObject.cpp: Person.hpp Department.hpp Course.hpp
Person.cpp: Date.hpp
Teacher.cpp: Person.hpp Date.hpp
Student.cpp: Person.hpp Date.hpp
main.cpp: DataObject.hpp Person.hpp Teacher.hpp Student.hpp Department.hpp Course.hpp



clean:
	rm *.o*

default:
	make Project
wrap:
	rm *.o
