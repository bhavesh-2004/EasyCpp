#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the rows :";
    cin>>m;

    cout<<"Enter the columns :";
    cin>>n;

    for (int i = 1; i <=m; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            cout<<"*\t";
        }
         cout<<endl;
    }
    
    
    
}