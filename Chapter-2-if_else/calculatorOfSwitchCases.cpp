#include<iostream>
using namespace std;
int main(){
int n1; //number 1
cin>>n1;
char op; //operator
cin>>op;
int n2; //number 2
cin>>n2;

switch(op){
    case '+':
        cout<<"Addition: "<<n1+n2<<endl;
        break;
     case '-':
        cout<<"Substraction: "<<n1-n2<<endl;
        break;
    case '*':
        cout<<"Multiplication: "<<n1*n2<<endl;
        break;
     case '/':
        cout<<"Division: "<<n1/n2<<endl;
        break;

    default:
         cout<<"Invalid operator....!!!";
}

return 0;
}