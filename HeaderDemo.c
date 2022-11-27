#include "Marvellous.h"

int main()
{
	struct Demo obj;
	int no = 11;
	float Radius = 30.65f;
	float Area = PI * Radius * Radius;
	
	IPTR ptr = &no;
	
	Printf("Area is : %f\n",Area);
	
	printf("Value of no is : %d\n",*IPTR);
	
	return 0;
}