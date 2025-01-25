#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    if(n>99 && n<1000){ //&& ==== logical and operator....
        cout<<"The given number is three digit number";
    }
    else{
         cout<<"The given number is not three digit number";
    }
    return 0;
}