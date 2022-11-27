#include<iostream>
using namespace std;

class Demo
{
	int i;
	int j;
	
	Demo()
	{
		i = 11;
		j = 21;
	}
	
	Demo(int x, int y)
	{
		i = x;
		j = y;
	}
};

int main()
{
	Demo obj1;
	Demo obj2(10,20);
	
	const Demo obj3;
	const Demo obj4(10,20);
	
	obj1.i++;		//Allowed
	obj4.i++;		//Not Allowed
	obj3.j++;		//Not Allowed
	obj1.j++;		//Allowed
	
	return 0;
}