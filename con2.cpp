#include<iostream>
#include<math.h>
using namespace std;
class complex
{
private:
    int real;
    int img;//3+i2
    public:
    complex(){
       real=img=0.0;
    }

complex(int x, int y=0){
   real=x;
   img=y;
}
void show( char *msg){
   cout<<msg<<real;
   if(img<0)
   cout<<"-i";
   else
   cout<<"+i";
   cout<<fabs(img)<<endl;//fabs work make from  - to +
}
complex add(complex c2);
 };
 complex complex ::add(complex c2){
    complex temp;
   temp.real=real+c2.real;
   temp.img=img+c2.img;
   return(temp);
 }
int main(void){
   complex c1(1,4);
   complex c2(38);
   complex c3;
   c1.show("c1= ");
   c2.show("c2= ");
   c3=c1.add(c2);
   c3.show("c3= ");
}
