/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef LECTURER_H
#define LECTURER_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//Lecturer.h

#include "Course.h"

/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Student;

/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Lecturer
    {
    /* {src_lang=cpp}*/


    // Attributes
public:
    Integer  newAttr;

    // Associations
public:

    /**
     * @element-type Student
     */
    Student  *myStudent;


    /**
     * @element-type Course
     */
    Course  &myCourse;


    // end of class Lecturer
    };

#endif// LECTURER_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
