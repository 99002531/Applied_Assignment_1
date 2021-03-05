#ifndef __BOX_LIST_H__
#define __BOX_LIST_H__

#include "box_init.h"

/**
*@brief         create a dynamic array 
*
*@usage         This function creates array of given size
*
*@param         constant size of the array
*
*@return        signifying successfull execution of function
*/

box_t* create_an_array(const size_t num_of_boxes);

/**
*@brief		add_a_box
*
*@usage		This function adds node at the of the list
*
*@param		Pointer to list
*@param		Data to be stored in the node as box_data_t
*
*@return	signifying successfull execution of function
*/
status_t add_box_end(box_t* box_ptr, const size_t array_size,const box_t *new_box);

/**
*@brief		display_all
*
@usage```Displays the features of every node
*
*@params	Pointer to list
*
*@return	Total number of nodes
*/
status_t display_all(const box_t *box_array,const size_t array_size);

/**
*@brief		count_color
*
*@usage		count the number of nodes having same colour
*
*@param		Pointer to list
*@param		colour to be searched
*
*@return	number of nodes having same colour
*/
int count_color(box_t* head,char* color);

/**
*@brief         find_box_id
*
*@usage         find the node with unique box id
*
*@param         Pointer to list
*@param         ID to be searched
*
*@return        ID if successful; or 0 if failed
*/
int find_box_id(box_t* head,int id);

/**
*@brief         Avg_volume
*
*@usage         find average volume of all nodes(length * breadth * height)
*
*@param         Pointer to list
*
*@return        average volume if successful; or 0 if failed
*/
float Avg_volume(box_t* head);

/**
*@brief         remove_box_id
*
*@usage         remove node having given ID from the list
*
*@param         Pointer to list
*@param         ID to be removed
*
*@return        head pointer
*/
box_t* remove_box_id(box_t* head, int id);

/**
*@brief         min_max diff
*
*@usage         diffrence between min and max volume of the nodes
*
*@param         Pointer to list
*
*@return       	volume diffrence of min and max value 
*/

float min_max_diff(box_t* head);
#endif

