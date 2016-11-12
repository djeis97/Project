/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright © 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#ifndef RA_H
#define RA_H

// FILE: /Users/randymcmillan/COP3331/Assignments/Project//RA.h

#include "Assistant.h"

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

class RA
    {
    /* {src_lang=cpp}*/


    // Associations
public:

    /**
     * @element-type Graduate
     */
    Graduate  *myGraduate;


    /**
     * @element-type Assistant
     */
    Assistant  &myAssistant;


    // end of class RA
    };

#endif// RA_H
/*******************************************************************************
*                                                                              *
*******************************************************************************/
