/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef TA_H
#define TA_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//TA.h

#include "GradCourse.h"

/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Graduate;

/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class TA
    {
    /* {src_lang=cpp}*/


    // Associations
public:

    /**
     * @element-type Graduate
     */
    Graduate  *myGraduate;

    /**
     * @element-type GradCourse
     */
    GradCourse  myGradCourse;

    /**
     * @element-type GradCourse
     */
    GradCourse  myGradCourse;



    // end of class TA
    };

#endif// TA_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
