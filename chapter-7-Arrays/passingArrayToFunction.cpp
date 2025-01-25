#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]= 10;
}
int main(){
    int arr[3] = {3,4,7};
    for(int i = 0; i<=2; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    change(arr);

     for(int i = 0; i<=2; i++){
        cout<<arr[i]<<" ";
    }
   
}