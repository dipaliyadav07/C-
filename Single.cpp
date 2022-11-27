#include<iostream>
using namespace std;

class Base
{
	public:
		int A,B;
		
		Base()
		{
			cout<<"Inside Base Constructor\n";
		}
		~Base()
		{
			cout<<"Inside base destructor\n";
		}
		void fun()
		{
			cout<<"Inside Base fun\n";
		}
};

class Derived : public Base		//class Derived extends Base (Syntax of JAVA)
{
	public:
		int X,Y;
		
		Derived()
		{
			cout<<"Inside Derived Constructor\n";
		}
		~Derived()
		{
			cout<<"Inside Derived Destructor\n";
		}
		void gun()
		{
			cout<<"Inside gun of derived\n";
		}
};

int main()
{
	// Derived dobj;		//static memory allocation
	
	Derived * ptr = NULL;
	
	ptr = new Derived;		//Dynamic Memory allocation
	
	ptr->fun();
	ptr->gun();
	
	delete ptr;
	
	return 0;
}