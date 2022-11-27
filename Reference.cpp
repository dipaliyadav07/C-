#include<iostream>
using namespace std;

int main()
{
	int no = 11;
	
	int &x = no;		//reference operator
	
	int *p = &no;		//address of operator
	
	double d = 90.9;
	
	double &y = d;
	
	double &z = d;
	
	int &a=x;
	
	return 0;
}	