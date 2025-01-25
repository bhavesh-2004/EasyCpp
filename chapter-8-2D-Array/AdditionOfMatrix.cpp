#include<iostream>
using namespace std;
int main(){
    int arr1[3][3];
     cout<<"ENTER THE 1st MATRIX ELEMENT : "<<" "<<endl;
    for(int i = 0; i<=2; i++){
        for(int j = 0; j<=2; j++){
            cin>>arr1[i][j];
        }
    }
        cout<<" 1st MATRIX IS : "<<" "<<endl;
        for(int i = 0; i<=2; i++){
         for(int j = 0; j<=2; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    int arr2[3][3];
     cout<<"ENTER THE 2nd MATRIX ARRAY ELEMENT : "<<" "<<endl;
    for(int i = 0; i<=2; i++){
        for(int j = 0; j<=2; j++){
            cin>>arr2[i][j];
        }
    }
        cout<<"2nd MATRIX IS : "<<" "<<endl;
        for(int i = 0; i<=2; i++){
         for(int j = 0; j<=2; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
   }

   int arr3[3][3];
    
        cout<<"ADDITION OF MATRIX IS : "<<" "<<endl;
        for(int i = 0; i<=2; i++){
         for(int j = 0; j<=2; j++){
            arr3[i][j]  = arr1[i][j] + arr2[i][j];      
            cout<<arr3[i][j]<<" ";
        }
        //    cout<<arr3[i][j];
        cout<<endl;
    }
       
 }
 
   
