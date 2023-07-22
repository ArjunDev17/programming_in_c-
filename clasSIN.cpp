#include<iostream>
using namespace std;
enum boolean{FALSE,TRUE};
const int M= 25;
class Bag{
    private:
     int content[M];
     int ItemCounter;
    public:
    Bag(){
        ItemCounter=0;
    }
     void put(int item){
         content[ItemCounter++]=item;
     }
     boolean isEmpty(){
         return ItemCounter== 0 ?TRUE:FALSE;
     }
     boolean isFull(){
         return ItemCounter== M ? TRUE:FALSE;
     }
     void show();
};
void Bag ::show(){

}

