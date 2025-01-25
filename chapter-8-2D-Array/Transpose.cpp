#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
     cout<<"ENTER THE MATRIX OF AN ARRAY ELEMENT : "<<" "<<endl;
    for(int i = 0; i<=2; i++){
        for(int j = 0; j<=2; j++){
            cin>>arr[i][j];
        }
    }
        cout<<"MATRIX OF AN ARRAY IS : "<<" "<<endl;
        for(int i = 0; i<=2; i++){
         for(int j = 0; j<=2; j++){
            cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }

     cout<<"TRANSPOSE OF MATRIX IS : "<<" "<<endl;
        for(int j = 0; j<=2; j++){
         for(int i = 0; i<=2; i++){
            cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
    return 0;
   
}