#include "func_def.h"


box_t* create_an_array(const size_t num_of_boxes){

box_t *ptr;

ptr= (box_t*)malloc(num_of_boxes * sizeof(box_t));


return ptr;

}



