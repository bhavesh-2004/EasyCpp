#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    int r;
    cout<<"Enter the r: ";
    cin>>r;
    //for combination we required nCr  = n!/r!*(n-r)!.............n,r,(n-r)
    int a = 1;  
    for(int i = 1; i<=n; i++){
        a *= i;
    }
    // cout<<a;
      int b = 1;  
    for(int i = 1; i<=r; i++){
        b *= i;
    }
      int c = 1;  
    for(int i = 1; i<=(n-r); i++){
        c *= i;
    }
    cout<<a/(b*c);
    
}