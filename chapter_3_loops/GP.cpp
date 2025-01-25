// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";

//     for(int i=1; i<=n; i++){

//         cout<<i<<"";
//         i = i*2;

//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int i,n; 
    cout<<"enter the n:";
    cin>>n;
    int a = 3;
    //formula : an =  a+(n-1)d...........    d = difference a = starting position
   // geometrical proggresion(GP) =  1,2,4,8,16,32....n
   // geometrical proggresion(GP) =  5,15,45,135,405...n
    for(int i=1; i<=n; i=i+1){
        cout<<a<<endl;
        a = a*4;

    }
}