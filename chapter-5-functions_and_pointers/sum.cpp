#include<iostream>
using namespace std;

void sum(int a, int b){
    cout<<a+b;
     
}

int main(){
    int a;
    cout<<"Enter the 1st number:";
    cin>>a;
     int b;
    cout<<"Enter the 2nd number:";
    cin>>b;

    sum(a,b);
    return 0;
}//without return types

// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     return a+b;    
// }

// int main(){
//     cout<<sum(100,20);
//     return 0;
// }
// //with return type