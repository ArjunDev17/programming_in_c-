#include<iostream>
using namespace std;
class car{
    public:
       virtual void gairChange(){
            cout<<"----------------------------"<<endl;
            cout<<"it is a car class gair "<<endl;
        }
};
class superCar :public car{
    public:
        void gairChange(int x){
           // car::gairChange();
            cout<<"->->->->->->->->---------------"<<endl;
            cout<<"supar car  have 8 gair  feature "<<endl;
        }
};
int main(){
   superCar obj;
   car O;
   O.gairChange();
   obj.gairChange(8);
   //obj.car::gairChange();
    return 0;
}
