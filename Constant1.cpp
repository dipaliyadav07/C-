#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		int j;
		const int k;
		const int l;
		
		//Default constructor
		Demo() : k(11), l(21)
		{
			i = 51;
			j = 101;
		}
		
		//Parameterised constructor 
		Demo(int a, int b, int c, int d) : k(c),L(d)
		{
			i = a;
			j = b;
		}
			
		
};

int main()
{
	Demo obj;
	Demo obj(10,20,30,40);
	obj1.i++;
	obj2.i++;
	//obj1.k++;		NA
	//obj2.k++;		NA 
	
	return 0;
}