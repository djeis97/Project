/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef PERSON_H
#define PERSON_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//Person.h

#include "Teacher.h"


/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Person
    {
    /* {src_lang=cpp}*/


    // Attributes
public:
    Integer  UniversityID;
    String  firstName;
    String  middleName;
    String  lastName;
    String  gender;

    // Associations
public:


    /**
     * @element-type Teacher
     */
    Teacher  &myTeacher;


    // end of class Person
    };

#endif// PERSON_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
