/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef COURSE_H
#define COURSE_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//Course.h

#include "GradCourse.h"
#include "UnderGradCourse.h"


/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Course
    {
    /* {src_lang=cpp}*/


    // Associations
public:

    /**
     * @element-type UnderGradCourse
     */
    UnderGradCourse  myUnderGradCourse;

    /**
     * @element-type GradCourse
     */
    GradCourse  myGradCourse;




    // end of class Course
    };

#endif// COURSE_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
