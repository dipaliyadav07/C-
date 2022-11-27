#include<iostream>
using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo()
	{
		cout<<"Inside constructor"<<"\n";
	}
	~Demo()
	{
		cout<<"Inside destructor"<<"\n";
	}
	void Fun()
	{
		cout<<"Inside Fun"<<"\n";
	}
};

int main()
{
	Demo obj1;		//static
	
	Demo *ptr = NULL;
	
	ptr = new Demo;	//new calls the constructor 
	//internally in c -> (Demo *)malloc(sizeof(Demo)); but there is no call for constructor in c by malloc function
	
	ptr->Fun();
	
	cout<<"Value of X"<<ptr->x<<"\n";		//0
	
	delete ptr;
	
	return 0;
}