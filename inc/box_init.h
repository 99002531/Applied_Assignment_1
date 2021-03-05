#ifndef __BOX_INIT_H__
#define __BOX_INIT_H__

#include <stdio.h>
#include <string.h>
#include <float.h>


/** @enum status_t
*   @brief This enum check the status of execution
*/

typedef enum status_t
{
	SUCCESS	= 0, 
	MEMORY_FAILURE = -1,
	ARRAY_FULL = 1,
	NULL_PTR = -2,

}status_t;



/** @enum color_t
 *  @brief This enum is a definition of colours
*/
	
typedef enum color_t	{
	    RED = 0,	 	/** Colour Code for RED	  */
	    GREEN,		/** Colour Code for GREEN */
	    BLUE 		/** Colour Code for BLUE */
	} color_t;


/*
*Header file for box structure including enum for color property
*Properties in box - id,length,breadth,height,weight,color
*
*/

typedef struct box box_t;

struct box{
	__uint8_t box_id;
        float length;
        float breadth;
        float height;
        float weight;
	color_t color;
};



#endif


