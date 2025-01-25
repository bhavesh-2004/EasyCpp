#include<iostream>
using namespace std;
int main(){
    // 5 integers -> 2,3,9,7,6
  
 int arr[5];
    // cout<<"Enter the n:";
    // cin>>n;
    cout<<"Enter the array elements:";
     for(int i = 0; i<=4; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}