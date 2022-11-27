#include<iostream>
using namespace std;

class Base
{
	public:
		int A,B;
		
};

class Derived : public Base
{
	public:
		int X,Y;
		
};

int main()
{
	Base * bp = NULL;
	Derived *dp = NULL;
	
	Base bobj;
	Derived dobj;
	
	bp = &bobj;		//no casting	allowed
	dp = &dobj;		//no casting	allowed
	bp = &dobj;		//upcasting		allowed
	// dp = &bobj;		//downcasting 	not allowed
	
	return 0;
}