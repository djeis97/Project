/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef GRADCOURSE_H
#define GRADCOURSE_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//GradCourse.h

#include "Course.h"

/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class TA;

/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class GradCourse
    {
    /* {src_lang=cpp}*/


    // Associations
public:

    /**
     * @element-type TA
     */
    TA  *myTA;



    /**
     * @element-type Course
     */
    Course  &myCourse;


    // end of class GradCourse
    };

#endif// GRADCOURSE_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
