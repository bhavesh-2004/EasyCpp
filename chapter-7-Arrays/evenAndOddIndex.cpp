#include<iostream>
using namespace std;
int main(){
  int arr[5] = {12,4,5,6,7};

   cout<<"the indexing element: ";
  for(int i = 0; i<5; i++){
if(i%2==0){
    arr[i] += 10;
}
else{
    arr[i] *= 2;
}
 
cout<< arr[i]<<" ";
  }
   
}