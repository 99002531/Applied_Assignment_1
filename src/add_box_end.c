#include "func_def.h"

status_t add_box_end(box_t* box_ptr, const size_t array_size,const box_t *new_box)
{
	if(box_ptr == NULL)
		return  NULL_PTR;

	for(int index=0; index < array_size; index++)
	{
		  if (0 != (box_ptr + index)->box_id)
	            continue;
	        else
	        {
	            memcpy((box_ptr + index), new_box, sizeof(box_t));
	            return SUCCESS;
	        }
	 }
	return ARRAY_FULL;
}	    	
