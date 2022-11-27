#include<iostream>
using namespace std;

class Demo
{
	public:			//access specifier
		int i;		//instance variable
		int j;		//instance variable
		static int k;	//class variable
		static int l;	//class variable
		
		Demo()		//default constructer
		{
			i = 0;
			j = 0;
		}
		
		Demo(int a,int b)	//parameterised constructor
		{
			i = a;
			j = b;
		}
		
		//void fun (const Demo *this)
		void fun()		//instance method
		{
			// static + non static
			cout<<"Inside non static method fun\n";  
			cout<<"value of i :"<<this->i<<"\n";
			cout<<"value of j :"<<this->j<<"\n";
			cout<<"value of k :"<<k<<"\n";
			cout<<"value of l :"<<l<<"\n";
		}
		
		//static void gun()
		static void gun()		//class method
		{
			//static
			cout<<"Inside static method gun\n";
			cout<<"value of k :"<<k<<"\n";
			cout<<"value of l :"<<l<<"\n";
		}
};

//load time variables
int Demo::k = 0;
int Demo::l = 0;

int main()
{
	cout<<"Inside main\n";
	cout<<"Value of k : "<<Demo::k<<"\n";	//0
	cout<<"Value of l : "<<Demo::l<<"\n";	//0
	
	Demo::gun();
	
	Demo obj1(10,11);
	Demo obj2(20,21);
	Demo obj3;
	
	cout<<"Value of i in obj1 : "<<obj1.i<<"\n";	//10	
	cout<<"Value of i in obj2 : "<<obj2.i<<"\n";	//20
	
	cout<<"Value of j in obj1 : "<<obj1.j<<"\n";	//11
	cout<<"Value of j in obj2 : "<<obj2.j<<"\n";	//21
	
	cout<<"Value of i in obj3 : "<<obj3.i<<"\n";
	cout<<"Value of j in obj3 : "<<obj3.j<<"\n";
	
	obj1.fun();		//internally->fun(&obj1);
	obj2.fun();
	
	obj1.gun();		//internally->Demo::gun();
	
	return 0;
}

//size of object is summation of sizes of its non static characteristics
//sizeof(obj) = sizeof(i) + sizeof(j);
//sizeof(obj) = 4+4;
//sizeof(obj) = 8;