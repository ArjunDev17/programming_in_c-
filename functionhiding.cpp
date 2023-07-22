#include <iostream>
using namespace std;

class Base {
public:
	void fun()
	{
		cout << "Base::fun() called";
	}
	void fun(int i)
	{
		cout << "Base::fun(int i) called"<<endl;
	}
};

class Derived : public Base {
public:
	using Base::fun;
	// Makes Base::fun() and Base::fun(int )
	// hidden
	void fun(char c)
	{
		cout << "1:-Derived::fun(char c) called"<<endl;
	}
};

// Driver Code
int main()
{
	Derived d;
   
    //error because compiler never go parent class itcheck \
    only derived class where argumnet no\
    mathched thats why generate erro
    
    d.fun('e'); // No Compiler Error
     d.fun();
	return 0;
}
