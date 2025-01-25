#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter the Element of Array:";
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }
    int mx = arr[0];
    for(int i = 0; i<5; i++){
        mx = max(mx,arr[i]); 
    }
     int smx = arr[0];
      for(int i = 0; i<5; i++){
         if(arr[i]!=mx)
          smx = max(smx,arr[i]); 
    }
     cout<<"second max element is: "<<smx;

}