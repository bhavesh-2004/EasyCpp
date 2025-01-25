// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the n:";
//     cin>>n;
//     for(int i=2; i<n/2; i++){
//         if(n%i==0){
//             cout<<"composite number..";
//             break;
//         }
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the n:";
    cin>>n;

    bool flag = true; // if flag is true then it's consider as prime......
    
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
             flag = false; //if flag is false then it's consider as composite......
            break; //to get out of the loop
        }
    }
    if(n==1){
        cout<<"neither prime nor composite...";
    }
    else if(flag==true){
        cout<<"prime number";
    }
    else{
        cout<<"composite number..";
    }
    return 0;
}