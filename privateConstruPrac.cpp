#include<iostream>
using namespace std;
class COn{
    private:
        int acc;
        float rs;
        COn();
    public:
        void setData(int AcNum,float balance){
            acc=AcNum;
            rs=balance;
        }
        void showData(){
            cout<<"Account numb"<<acc<<endl;
            cout<<"Balance"<<rs;
        }
       static COn getInstance(){
                COn obj1;
                return obj1;
        }
};
int main(){
    COn::getInstance();
}