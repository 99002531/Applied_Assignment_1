#include "box_init.h"

#include "func_def.h"


int main()
{

	box_t box1 = {
		.box_id=12,
		.length=12,
		.breadth=10,
		.height=15,
		.weight=20,
		.color="blue"};
	box_t box2 = {
                .box_id=13,
                .length=12.13,
                .breadth=10.4,
                .height=15.67,
                .weight=20.0,
                .color="red"};
	 box_t box3 = {
                .box_id=14,
                .length=125.13,
                .breadth=11.4,
                .height=12.67,
                .weight=26.0,
                .color="red"};
	 box_t box4 = {
                .box_id=15,
                .length=12.13,
                .breadth=10.4,
                .height=15.67,
                .weight=20.0,
                .color="blue"};

printf("hi");


return 0;

}
