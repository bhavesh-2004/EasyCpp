#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    if(n >= 0){
        cout<<"AbsoluteValue:"<<n<<endl;
    }
    else{
        cout<<"AbsoluteValue:"<<-n<<endl;
    }
    return 0;
}