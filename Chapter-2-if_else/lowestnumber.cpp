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
    
    if(a<b && a<c){
        cout<<"first number is lowest";
    }
    else if(b<a && b<c){
        cout<<"second number is lowest";
    }
    else if(c<a && c<b){
        cout<<"third number is lowest";
    }
    else{
        cout<<"Invalid numbers";

    }
    return 0;
}