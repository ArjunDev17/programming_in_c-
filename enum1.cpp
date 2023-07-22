#include<iostream>
using namespace std;
enum captain{virat,sid,DHONI,rohit};
int main(){
    captain cap;
    cout<<"enter captian name ";
   /// cin>>cap;
    captain cap = DHONI;
    if(cap==DHONI){
        cout<<"captian is dhoni :";
    }
    return 0;
}
/*enum supercars{venom=301,Veryon=290,bmw=289};
int main(){
    supercars speed1;
    supercars speed2;
    speed1=bmw;
    speed2=venom;
    if (speed1<speed2)
    {
        cout<<"venom is speed more if comapare bmw";
    }
    return 0;
}*/
/*enum color {red,blue,green,yellow};
enum color2 {red1=6,blue2,green2,yellow2};
int main(void){
    cout<<red1;
    return 0;
}*/