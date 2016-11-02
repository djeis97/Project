#Comment
#CC=c++
#CFLAGS=-c -Wall

all: Project

Project: main.o Adjunct.o Assistant.o Course.o Department.o GradCourse.o Lecturer.o Person.o Professor.o RA.o TA.o Teacher.o UnderGraduate.o
	c++ -c main.o Adjunct.o Assistant.o Course.o Department.o GradCourse.o Lecturer.o Person.o Professor.o RA.o TA.o Teacher.o UnderGraduate.o -o Project

main.o: main.cpp
	c++ -c main.cpp

Adjunct.o: Adjunct.cpp
	c++ -c Adjunct.cpp

Assistant.o: Assistant.cpp
	c++ -c Assistant.cpp

Course.o: Course.cpp
	c++ -c Course.cpp

Department.o: Department.cpp
	c++ -c Department.cpp

GradCourse.o: GradCourse.cpp
	c++ -c GradCourse.cpp

Graduate.o: Graduate.cpp
	c++ -c Graduate.cpp

Lecturer.o: Lecturer.cpp
	c++ -c Lecturer.cpp

Person.o: Person.cpp
	c++ -c Person.cpp

Professor.o: Professor.cpp
	c++ -c Professor.cpp

RA.p: RA.cpp
	c++ -c RA.cpp

TA.o: TA.cpp
	c++ -c TA.cpp

Teacher.o: Teacher.cpp
	c++ -c Teacher.cpp

UnderGradCourse.o: UnderGradCourse.cpp
	c++ -c UnderGradCourse.cpp

UnderGraduate.o: UnderGraduate.cpp
	c++ -c UnderGraduate.cpp

clean:
	rm *.o* Project

default:
	make clean
wrap:
	rm *.o
