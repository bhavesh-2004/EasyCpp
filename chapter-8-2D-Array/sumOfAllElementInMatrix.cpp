#include<iostream>
using namespace std;
int main(){
    int arr[2][2];
     cout<<"ENTER THE MATRIX OF AN ARRAY ELEMENT : "<<" "<<endl;
    for(int i = 0; i<=1; i++){
        for(int j = 0; j<=1; j++){
            cin>>arr[i][j];
        }
    }
        cout<<"MATRIX  IS : "<<" "<<endl;
        for(int i = 0; i<=1; i++){
         for(int j = 0; j<=1; j++){
            cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }

    int sum  = 0;

 
        for(int i = 0; i<=1; i++){
         for(int j = 0; j<=1; j++){
                sum += arr[i][j];
        }
     
    }    
     cout<<"Sum of All Element : "<<sum<<endl;
        // cout<<sum;

    return 0;
   
}