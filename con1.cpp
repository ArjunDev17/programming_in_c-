#include<iostream>
using namespace std;
const int MAX_ITEMS = 25;
class Bag
{
private:
    int contents[MAX_ITEMS];
    int itemCounter;
public:

//set itemcount to empty setEmpty(){
    Bag(){
    itemCounter = 0;
}
void put (int item){
    contents [ itemCounter++ ] = item;
}
void show();    
};
//display
void Bag :: show(){
    for( int i= 0; i< itemCounter;i++){
        cout<<contents[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int item;
    Bag b1;
    //b1.setEmpty();
    while(1){
        cout<<"enter item number to put into the bag ";
        cin>>item;
        if(item==0)
        break;
        b1.put(item);
        cout<< "Item in bag : ";
        b1.show( );
    }
}

