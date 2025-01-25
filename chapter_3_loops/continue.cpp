#include<iostream>
using namespace std;
int main(){
    int n;
    // cout<<"enter the n:";
    // cin>>n;
    for(int i=1; i<=100; i++){
        if(i%2==0)
        continue;
          cout<<i<<" ";
    }
}