#include<iostream>
using namespace std;
int main(){
int arr[6];
int n;
cout<<"Enter the element of Array: "<<endl;

for(int i = 0; i<=4; i++){
    cin>>arr[i];
}
int mn = arr[0];

for(int i = 0; i<=4; i++){
    mn = min(mn,arr[i]);
}
cout<<"the min element of Array : "<<mn<<endl;
}