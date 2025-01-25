#include<iostream>
using namespace std;
int main(){
      int a,b,c;
    cout<<"Enter the 1st number:";
    cin>>a;
     cout<<"Enter the 2nd number:";
    cin>>b;
     cout<<"Enter the 3rd number:";
    cin>>c;

    if(a>b){ //a>b && b>c --> a>c 
        if(a>c){
            cout<<a<<" is greater number";
        }
        else{
            cout<<c<<" is greater number";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greater number";
        }
        else{
            cout<<c<<" is greater number";
        }
    }
    return 0;
}