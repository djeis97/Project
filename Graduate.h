/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright � 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef GRADUATE_H
#define GRADUATE_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//Graduate.h

#include "Assistant.h"
#include "Course.h"
#include "RA.h"
#include "TA.h"


/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright � 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Graduate
    {
    /* {src_lang=cpp}*/


    // Associations
public:


    /**
     * @element-type RA
     */
    RA  myRA;

    /**
     * @element-type TA
     */
    TA  myTA;

    /**
     * @element-type Course
     */
    Course  &myCourse;

    /**
     * @element-type Assistant
     */
    Assistant  &myAssistant;


    // end of class Graduate
    };

#endif// GRADUATE_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
