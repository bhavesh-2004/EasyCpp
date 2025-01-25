#include<iostream>
using namespace std;
int main(){
    int arr[2][4];
     cout<<"ENTER THE MATRIX OF AN ARRAY ELEMENT : "<<" "<<endl;
    for(int i = 0; i<=1; i++){
        for(int j = 0; j<=3; j++){
            cin>>arr[i][j];
        }
    }
        cout<<"MATRIX OF AN ARRAY IS : "<<" "<<endl;
        for(int i = 0; i<=1; i++){
         for(int j = 0; j<=3; j++){
            cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
    return 0;
   
}