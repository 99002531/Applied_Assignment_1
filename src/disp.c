#include "func_def.h"


const char  *getcolor(color_t color)
{
switch (color)
{
case 0: return "Red";
case 1: return "Green";
case 2: return "Blue";
default: return "Box color is not listed";
}

}
status_t display_all(const box_t *box_array,const size_t array_size)
{
	if(box_array == NULL)
		return NULL_PTR;
	
	for(int index=0; index<array_size ;index++)
	{
		printf("Box id is %d |",box_array[index].box_id);
		printf(" Box length is %.2f |",box_array[index].length);
		printf(" Box breadth is %.2f|",box_array[index].breadth);
		printf(" Box height is %.2f |",box_array[index].height);
		printf(" Box weight is %.2f |",box_array[index].weight);
		printf(" Box colour is %s\n",getcolor(box_array[index].color));
		printf("\n");
	}
	
	return SUCCESS;
}



