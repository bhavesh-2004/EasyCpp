#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;
    int count = 0; //count is a nothing but storing the data of perticular variables.............
    while(n!=0){
     n = n/10;
    count++; 
    }
    cout<<count;
    return 0;
}