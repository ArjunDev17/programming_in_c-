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
        void gairChange(){
           // car::gairChange();
            cout<<"->->->->->->->->---------------"<<endl;
            cout<<"supar car gair with more feature "<<endl;
        }
};
int main(){
    car *obj,ocar;//car object
    superCar obj2,ob;//super car object
    obj= &obj2;
    obj->gairChange();
    ob.gairChange();
    ocar.gairChange();
    ob.car::gairChange();
    return 0;
}
/*car obj2;
    superCar *obj;
    obj= &obj2;
    obj->gairChange();
    //obj.car::gairChange();
    return 0;*/