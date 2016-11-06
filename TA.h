/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef TA_h
#define TA_h

#include "Course.h"
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

public:

    /**
     * @element-type Graduate
     */
    Graduate  *myGraduate;

    /**
     * @element-type Course
     */
    Course  myCourse;



    /**
     * @element-type GradCourse
     */
    GradCourse  myGradCourse;
    };

#endif// TA_h
/*******************************************************************************
*                                                                              *
*******************************************************************************/
