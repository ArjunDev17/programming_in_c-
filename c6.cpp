//Data hiding 
#include<iostream>
using namespace std;

class part
{
private:
    int ModelNum;
    int partNum;
    float cost;
public:
       // int a;
       // cout<<a;
    void setPart(int mn,int pn,float c){
        ModelNum=mn;
        partNum=pn;
        cost=c;
    }
    void showData(){
        
        cout<<"Model : "<<ModelNum<<endl ;
        cout<<"Part number : "<<partNum<<endl ;
        cout<<"Cost : "<<cost<<endl;
    }
    
};
int main(void){
    part p1,p2,p3;
  
    p1.setPart(1990,23,178.6);
    p2.setPart(1997,2,200.8);
    cout<<"First car details : "<<endl;
    p1.showData();
    cout<<"secon part details: "<<endl;
    p2.showData();
    
}
  