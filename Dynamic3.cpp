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
	
	Demo *ptr = NULL;
	
	
	(Demo *)malloc(sizeof(Demo));
	
	ptr->Fun();
	
	cout<<"Value of X"<<ptr->x<<"\n";		//0
	
	delete ptr;
	
	return 0;
}