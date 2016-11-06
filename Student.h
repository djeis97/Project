/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef Student_h
#define Student_h

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
    };

#endif// Student_h
/*******************************************************************************
*                                                                              *
*******************************************************************************/
