#include<iostream>
using namespace std;

class Base
{
	public:
	int A,B;
	void fun()		//function defination			1000
	{
		cout<<"Base fun\n";
	}
	void gun(int i)		//function defination		2000
	{
		cout<<"Base gun with one integer\n";
	}
	void gun(int i, int j)		//overloaded function defination		3000
	{
		cout<<"Base gun with 2 integer\n";
	}
};

class Derived : public Base
{
	public:
		int X,Y;
		void sun()		//Function defination		4000
		{
			cout<<"Derived sun\n";
		}
		void fun()
		{
			cout<<"Derived fun\n";		//Function redefination		5000
		}
};



int main()
{
	Derived dobj;		
	dobj.fun();			//call 5000 
	dobj.gun(11);		//call 2000
	dobj.gun(11,21);	//call 3000
	dobj.sun();			//call 4000
	

	return 0;
}