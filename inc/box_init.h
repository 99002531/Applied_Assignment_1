#ifndef __BOX_INIT_H__
#define __BOX_INIT_H__

#include <stdio.h>
#include <string.h>
#include <float.h>

/**
*
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
	char color[10];
};



#endif


