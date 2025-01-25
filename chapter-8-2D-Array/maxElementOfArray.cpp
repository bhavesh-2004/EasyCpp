#include<iostream>
using namespace std;
int main(){
    int arr[2][2];
      cout<<"Enter the values of MATRIX : "<<endl;
    // int mx = INT8_MIN;
    for(int i = 0; i<=1; i++){
        for(int j = 0; j<=1; j++){
                    cin>>arr[i][j];
        }
        cout<<endl;
    }
        int mx = arr[0][0]; 

      for(int i = 0; i<=1; i++){
        for(int j = 0; j<=1; j++){

                  cout<<arr[i][j]<<" ";
           
        }  
        cout<<endl;
    }
     for(int i = 0; i<=1; i++){
        for(int j = 0; j<=1; j++){
                   mx = max(mx,arr[i][j]);
        }
       
    }
    cout<<"maximum value of MATRIX is : "<<mx;
}