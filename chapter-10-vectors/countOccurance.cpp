#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);
    
    for(int i = 0; i<5; i++){
        cin>>v[i];
    }

    for(int i = 0; i<5; i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;

    int n ;
    cout<<"enter the n:";
    cin>>n;

    int count = 0;

    for(int i = 0; i<v.size(); i++){
        if(v[i] == n){
            count++;
        }
    }
    cout<<count;
}
