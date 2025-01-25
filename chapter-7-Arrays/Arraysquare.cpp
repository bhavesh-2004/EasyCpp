 #include<iostream>
using namespace std;
int main(){
     
    int arr[4];
    int n;
    cout<<"enter the array element :"<<" ";
    for(int i = 0; i<=4; i++){
        cin>>arr[i];
    }
    cout<<"square of Array element is :";
      for(int i = 0; i<=4; i++){
         cout<<arr[i]*arr[i]<<" ";
    }
}