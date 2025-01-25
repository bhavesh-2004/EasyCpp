#include<iostream>
using namespace std;
int main(){
    int arr[7];
    int n = sizeof(arr)/4;
    cout<<"Enter the array element :"<<endl;
    for(int i=0; i<n; i++ ){
        cin>>arr[i];
    }
    int i = 0;
    int j = n-1;

    if(arr[i]==arr[j] ){
        cout<<"Yes it is Palindrome";
    }
    else{
         cout<<"it is Not Palindrome";
    }
}