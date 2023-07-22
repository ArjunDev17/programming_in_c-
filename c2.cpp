#include<iostream>
using namespace std;

class rec{
    private:
        int length,breadth,Area;
        public:
        void input(int l,int b){
            length=l;
            breadth=b;
        }
        int area(){
            return(length*breadth);
        }
        
};
int main(void){
    rec A;
      cout<<"please enter length and breadth values ";  
      int x,y;
      cin>>x>>y;
      A.input(x,y);  
    
      int cal=A.area(); 
      cout<<"area of rectangle is "<<cal; 
      return 0;
}