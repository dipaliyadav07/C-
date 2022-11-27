#inlude<iostream>
using namespace std;

int main()
{
	int *p = NULL;
	
	p = new int(5);		//C++ and JAVA
	//internally -> p = (int *)malloc(5 * sizeof(int));		//C
	
	//use the memory
	
	delete []p;		//there is no such line in java
	//internally -> free(p);
	
	return 0;
}


int *p = NULL;
p = new int;

int *q = NULL:
q = new int(5);

int *x = NULL;
x = new int[5];

delete p;
delete q;
delete []x;
