#include<iostream>
using namespace std;
enum mobile {BatteryCapicity=1,CameraQuality=2,LargeStoreg=5};
int main(){
    int feature= CameraQuality | LargeStoreg;
    cout<<feature;
    return 0;
}