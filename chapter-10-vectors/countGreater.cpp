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

    int n ;
    cout<<"Enter the n: ";
    cin>>n;

    int count = 0;
cout<<"The numbers of element strictly greater than the value "<< n << " is : ";
    for(int i = 0; i<v.size(); i++){
        if(n < v[i]){
                count++;
        }
    }
    cout<<count;

    return 0;
}