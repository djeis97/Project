/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef PROFESSOR_H
#define PROFESSOR_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//Professor.h

#include "Course.h"


/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Professor
    {
    /* {src_lang=cpp}*/


    // Attributes
public:
    Integer  newAttr;

    // Associations
public:


    /**
     * @element-type Course
     */
    Course  &myCourse;


    // end of class Professor
    };

#endif// PROFESSOR_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
