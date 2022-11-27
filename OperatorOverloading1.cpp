#include<iostream>
using namespace std;

class Demo
{
	public:
		int A,B;
		
		Demo(int i = 0, int j = 0)
		{
			A = i;
			B = j;
		}
	
};

Demo operator +(Demo obj1, Demo obj2)
{
	int no1 = 0;
	int no2 = 0;
	
	no1 = obj1.A+obj2.A;
	no2 = obj1.B+obj2.B;
	
	return Demo(no1, no2);
}

int main()
{
	Demo X(10,20);
	Demo Y(30,40);
	Demo Ans(0,0);
	
	Ans = X + Y;		//internally -> +(X,Y);
	cout<<Ans.A<<"\n";
	cout<<Ans.B<<"\n";
	
	return 0;
}