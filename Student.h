/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef STUDENT_H
#define STUDENT_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//Student.h

#include "Graduate.h"
#include "Lecturer.h"
#include "UnderGraduate.h"

/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Department;

/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Student
    {
    /* {src_lang=cpp}*/


    // Associations
public:


    /**
     * @element-type Graduate
     */
    Graduate  myGraduate;

    /**
     * @element-type UnderGraduate
     */
    UnderGraduate  myUnderGraduate;

    /**
     * @element-type Lecturer
     */
    Lecturer  myLecturer;

    /**
     * @element-type Department
     */
    Department  *myDepartment;


    // end of class Student
    };

#endif// STUDENT_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
