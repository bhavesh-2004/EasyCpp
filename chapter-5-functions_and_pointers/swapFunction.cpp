#include<iostream>
// #include<cmath> 
using namespace std;

void swap(int &x,int &y){ //& = reference : pass by reference
    // int temp; method one using extra variables:
    // temp=x;
    // x=y;
    // y=temp;
    x = x+y;  //method two without using extra variables:
    y = x-y;
    x = x-y;

}

int main(){
     int x = 12;
     int y = 45;

     cout<<x<<" "<<y<<endl;
     swap(x,y);  // pass by value
     cout<<x<<" "<<y<<endl;
     return 0;
    
    
}