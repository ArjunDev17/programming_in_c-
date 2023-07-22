#include<iostream>
using namespace std;
 
class Test {
    int value;
public:
    Test(int v = 0) {value = v;}
   // int getValue() {return value;}
      void display()const
    {
        cout<<"Baba Inside display() Function"<<endl;
    }
      int getValue()const {return value;}
};
 
int main() {
    const Test t(12);
 
   // cout << t.getValue();//not working
    t.display();
    cout<<"after making get value function as const "<<endl; 
    cout << t.getValue();
    return 0;
}
/*#include <iostream>
using namespace std;
 
class Test {
    int value;
 
public:
    Test(int v = 0)
         {
          value = v;
        }
 
    int getValue() const
     { 
         return value;
          }
};
 
int main()
{
    Test t(20);
    cout << t.getValue();
    return 0;
}*/