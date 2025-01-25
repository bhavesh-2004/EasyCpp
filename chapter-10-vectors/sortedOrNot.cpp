#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int>v(5);
 cout<<"Enter the element : ";
    for(int i = 0; i<v.size(); i++){
       cin>>v[i];
    }
    cout<<"vector : ";
    for(int i = 0; i<v.size(); i++){
       cout<<v[i]<<"  ";
    }
    cout<<endl;
     bool isSorted = true;
    for(int i = 1; i<v.size(); i++){
        if(v[i] <= v[i-1]){
             isSorted = false;
        }
          
    }
    cout<<isSorted<<endl;
}