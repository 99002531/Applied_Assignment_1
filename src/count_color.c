#include "func_def.h"

__uint16_t count_boxes_with_color(const box_t *box_ptr,const size_t array_size,color_t color)
{

__uint16_t color_count=0;

	if(box_ptr == NULL)
		return NULL_PTR;
	
	for(int index=0; index<array_size; index++)
	{
	if(box_ptr[index].color == color)
		color_count++;
	}
	
	return color_count;
}
