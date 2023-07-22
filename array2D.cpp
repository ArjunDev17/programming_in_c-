#include<iostream>
#define row 2
#define col 2
using namespace std;
int main(void){
    int arr[row][col],arr1[row][col],arr2[row][col],arr3[row][col];
    int i,j;
    cout<<"enter first array element"<<endl;
    for ( i = 0; i < row; i++){
            for (j = 0; j < col; j++){
            
                cin>>arr[i][j];
            }
        }
cout<<"enter secon array element"<<endl;
    for ( i = 0; i < row; i++){
            for (j = 0; j < col; j++){
            
                cin>>arr1[i][j];
            }
        }

        cout<<"First matrix is"<<endl;
        for ( i = 0; i < row; i++){
            for (j = 0; j < col; j++){
            
                cout<<"  "<<arr[i][j];
            }
            cout<<endl;
        }
        cout<<"second matrix is"<<endl;
        for ( i = 0; i < row; i++){
            for (j = 0; j < col; j++){
            
                cout<<"  "<<arr1[i][j];
            }
            cout<<endl;
        }

        cout<<"addition"<<endl;
         for ( i = 0; i < row; i++){
            for (j = 0; j < col; j++){
            
                arr2[i][j]=arr[i][j]+arr1[i][j];
            }
            
        }
        cout<<"addition of matrix is"<<endl;
            for ( i = 0; i < row; i++){
            for (j = 0; j < col; j++){
                   cout<<"  "<<arr2[i][j];
                }
            cout<<endl;
        }
        
        cout<<"diffrence"<<endl;
         for ( i = 0; i < row; i++){
            for (j = 0; j < col; j++){
            
                arr3[i][j]=arr[i][j]-arr1[i][j];
            }
        }
        cout<<"diff of matrix is"<<endl;
            for ( i = 0; i < row; i++){
            for (j = 0; j < col; j++){
                cout.width(2);
                   cout<<"  "<<arr3[i][j];
                }
            cout<<endl;
        }

    
    return 0;
}