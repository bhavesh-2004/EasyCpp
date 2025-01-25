#include<iostream>
using namespace std;

int pow(int a,int b){
    if(b==0)
    return 1;
int  x = pow(a,b/2);

if(b%2==0){
     return x * x; 
}
else{
    return x * x * a;
}
//   int  x = pow(a,b/2);

    // return x * x; 
}
int main(){
    int a;
    cout<<"Enter the coefficient a:";
    cin>>a;
    int b;
    cout<<"Enter the exponent b:";
    cin>>b;
    cout<<a<<" Raised to the power "<<b<<" is "<<pow(a,b);
}
