#include<iostream>
using namespace std;
 void sum(int n,int s){
    if(n==0){
         cout<<s<<endl;
         return;
    }
    sum(n-1,s+n);
 }
 
 int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;
    sum(n,0);
 }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the n:";
//     cin>>n;
//     int sum = 0;
//   for(int i = 1; i<=n; i++){
//    sum += i;
//     }
//      cout<<sum<<endl;
//     // cout<<endl;
// }