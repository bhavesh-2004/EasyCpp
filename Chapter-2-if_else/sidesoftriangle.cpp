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

    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"valid triangle";
    }
    else{
        cout<<"Invalid triangle";
    }
    return 0;
    
}