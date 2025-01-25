// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5];
//     //  cout<<"Enter the Elements of Array:"<<endl;
//     for(int i = 0; i<=4; i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];

//     for(int i = 0; i<=4; i++){
//         if(arr[i]>max){ 
//             max = arr[i];
//         }
//         // mx = max(mx,arr[i]);
//     } 
//     // cout<<"maximum value of Array Element is : "<<max;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter the Element of Array:";
    for(int i = 0; i<=5; i++){
        cin>>arr[i];
    }
    int mx = arr[0];
    for(int i = 0; i<=5; i++){
        mx = max(mx,arr[i]); 
    }
    cout<<"maximum value of Array Element is : "<<mx;



}