#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,3,6,7,2,1};
    int n = sizeof(arr)/4;
    cout<<"Original Array: "<<" ";

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    int i = 0;
    int j = n-1; 
    while(i<j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
    }
    cout<<endl;

    cout<<"Reverse Array: "<<" ";
     for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";

    }

}