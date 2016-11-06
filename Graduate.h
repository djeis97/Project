/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef Graduate_h
#define Graduate_h

#include "Assistant.h"
#include "Course.h"
#include "RA.h"
#include "TA.h"


/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

class Graduate
    {

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
    Course  myCourse;

    /**
     * @element-type Assistant
     */
    Assistant  myAssistant;
    };

#endif// Graduate_h
/*******************************************************************************
*                                                                              *
*******************************************************************************/
