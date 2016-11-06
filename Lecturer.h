/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef Lecturer_h
#define Lecturer_h

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

public:

    /**
     * @element-type Student
     */
    Student  *myStudent;


    /**
     * @element-type Course
     */
    Course  myCourse;
    };

#endif// Lecturer_h
/*******************************************************************************
*                                                                              *
*******************************************************************************/
