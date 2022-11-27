#include<iostream>
using namespace std;

class Base
{
	public:
	int A,B;
	void fun()		//1000
	{
		cout<<"Base fun\n";
	}
	virtual void gun()		//2000
	{
		cout<<"Base gun\n";
	}
	virtual void sun()		//3000
	{
		cout<<"Base sun\n";
	}
	virtual void run()		//4000
	{
		cout<<"Base run\n";
	}
	
};

class Derived : public Base
{
	public:
	int X,Y;
	void gun()			//5000
	{
		cout<<"Derived gun\n";
	}
	virtual void run()			//6000
	{
		cout<<"Derived run\n";
	}
	virtual void mun()		//7000
	{
		cout<<"Derived mun\n";
	}
};

int main()
{
	Base *bp = NULL;
	Derived dobj;
	bp = &dobj;		//upcasting
	
	bp->fun();		//Base fun			2000
	bp->gun();		//Derived gun		5000
	bp->sun();		//Base sun			3000
	bp->run();		//Derived run		6000
	// bp->mun();	//generates error as there is no function named mun in Base
	
	return 0;
}