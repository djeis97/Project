/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef Teacher_h
#define Teacher_h

#include "Adjunct.h"
#include "Lecturer.h"
#include "Professor.h"

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

class Teacher
    {

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

    /**
     * @element-type Department
     */
    Department  *myDepartment;
    };

#endif// Teacher_h
/*******************************************************************************
*                                                                              *
*******************************************************************************/
