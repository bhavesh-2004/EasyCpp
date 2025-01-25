#include<iostream>
using namespace std;
int main(){
    int cp,sp,rs;
    cout<<"Enter cost price:";
    cin>>cp;
    cout<<"Enter selling price:";
    cin>>sp;

    if(sp>cp){
        cout<<"seller has made profit:"<<sp-cp<<endl;
    }
    else if(sp<cp){
        cout<<"seller has incurred loss:"<<cp-sp<<endl;
    }
    else {
         cout<<"seller has made no profit and no loss";
    }
    
    return 0;
}