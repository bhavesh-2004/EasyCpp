#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number:";
    cin>>n;
    //ternary operator : syntax : condition ? expression 1 : expression 2 //
    (n%2==0) ? cout<<"even number" : cout<<"odd number"; 

}