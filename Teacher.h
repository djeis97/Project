/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef TEACHER_H
#define TEACHER_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//Teacher.h

#include "Adjunct.h"
#include "Lecturer.h"
#include "Professor.h"


/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Teacher
    {
    /* {src_lang=cpp}*/


    // Associations
public:


    /**
     * @element-type Adjunct
     */
    Adjunct  myAdjunct;

    /**
     * @element-type Lecturer
     */
    Lecturer  myLecturer;

    /**
     * @element-type Professor
     */
    Professor  myProfessor;



    // end of class Teacher
    };

#endif// TEACHER_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
