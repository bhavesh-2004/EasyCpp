#include<iostream>
using namespace std;
int main(){
    int arr1[] = {5,4,3,6,7,8,23};
    int  n =sizeof(arr1)/4;
    // int n = 0;
    int arr2[n];
for(int i = 0; i<=n; i++){
    int j = n-1-i;
    arr2[i]=arr1[j];
}
for(int i = 0; i<n; i++){
     cout<<arr2[i]<<" ";
}
}