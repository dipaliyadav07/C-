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

class DerivedX : public Derived
{
	public:
		int i,j;
		DerivedX()
		{
			cout<<"Inside DerivedX Constructor\n";
		}
		~DerivedX()
		{
			cout<<"Inside DerivedX Destructor\n";
		}
		void sun()
		{
			cout<<"Inside sun of DerivedX\n";
		}
};

int main()
{
	cout<<"Size of Base : "<<sizeof(Base)<<"\n";		//8
	cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";		//16
	cout<<"Size of DerivedX : "<<sizeof(DerivedX)<<"\n";	//24
	
	DerivedX dobj;
	
	dobj.fun();
	dobj.gun();
	dobj.sun();
	
	return 0;
}