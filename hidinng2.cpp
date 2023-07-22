#include<iostream>

using namespace std;

class Base
{
public:
	int fun()
	{
		cout<<"Base::fun() called";
	}
};

class Derived: public Base
{
public:
	using Base::fun;
	
	int fun(char c) // Makes Base::fun() and Base::fun(int ) unhidden
	{
		cout<<"Derived::fun(char c) called";
	}
};

int main()
{
	Derived d;
	d.fun(); // Works fine now 
	return 0;
}
