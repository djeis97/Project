/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef ADJUNCT_H
#define ADJUNCT_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//Adjunct.h

#include "Course.h"


/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Adjunct
    {
    /* {src_lang=cpp}*/


    // Operations
public:

    virtual void newOperation ();

    // Attributes
public:
    Integer  newAttr;

    // Associations
public:


    /**
     * @element-type Course
     */
    Course  &myCourse;


    // end of class Adjunct
    };

#endif// ADJUNCT_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
