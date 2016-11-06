/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef Person_h
#define Person_h

#include "Student.h"
#include "Teacher.h"


/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Person
    {

public:
    Integer  UniversityID;
    String  FirstName;
    String  MiddleName;
    String  LastName;

public:

    /**
     * @element-type Student
     */
    Student  myStudent;

    /**
     * @element-type Teacher
     */
    Teacher  myTeacher;
    };

#endif// Person_h
/*******************************************************************************
*                                                                              *
*******************************************************************************/
