#include<iostream>
using namespace std;

class Maths
{
	public:					//access specifier
		int iNo1;			//characteristics
		int iNo2;			//characteristics
		
	Maths()					//constructor(default)
	{
		cout<<"Inside default constructor\n";
		iNo1 = 0;
		iNo2 = 0;
	}
	
	Maths(int A, int B)		//constructor(parameterised)
	{
		cout<<"Inside parameterised constructor\n";
		iNo1 = A;
		iNo2 = B;
	}
	
	~Maths()
	{
		cout<<"Inside destructor\n";
		//Destructor
	}
	
	//internally-> int Addition(Maths *this);
	int Addition()			//behaviour
	{
		return iNo1 + iNo2;
	}
	
	//internally-> int Substraction(Maths *this);
	int Substraction()		//behaviour
	{
		return iNo1 - iNo2;
	}
};

int main()
{
	cout<<"Inside main function\n";
	Maths mobj1;
	Maths mobj2(11,10);
	int ret = 0;
	
	ret = mobj2.Addition();//internally->ret=Addition(&mobj2);
	//ret=Addition(200);
	cout<<"Addition is : "<<ret<<"\n";
	
	ret = mobj1.Substraction();//internally->ret=substraction(&mobj1);
	//ret=Substraction(100);
	cout<<"Substraction is : "<<ret<<"\n";
	
	return 0;
}