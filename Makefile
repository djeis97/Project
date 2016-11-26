#Comment
CC=c++
CFLAGS=-Wall -std=c++11

all: Project

Project: main.o Date.o DataObject.o Course.o Department.o Person.o Teacher.o Student.o
	$(CC) $(CFLAGS) main.o Date.o DataObject.o Course.o Department.o Person.o Teacher.o Student.o -o Project

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

%.cpp: %.hpp

DataObject.o: Person.hpp Department.hpp Course.hpp
Person.o: Date.hpp
Teacher.o: Person.hpp Date.hpp
Student.o: Person.hpp Date.hpp
main.o: DataObject.hpp Person.hpp Teacher.hpp Student.hpp Department.hpp Course.hpp



clean:
	rm *.o*

default:
	make Project
wrap:
	rm *.o
