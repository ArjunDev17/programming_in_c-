#include <iostream>

using namespace std;

class Base {
public:
	void fun()
	{
		cout << "Base::fun() called"<<endl;
	}
};

class Derived : public Base {
public:
	
	void fun(int x,float h){
       //  Base ::fun();   
		cout << "Derived::fun(char c) called"<<endl;
	}
};

int main()
{
	Derived d;
	d.Base::fun(); 
    d.fun(4,9.6);
   // d.fun();
   	return 0;
}
