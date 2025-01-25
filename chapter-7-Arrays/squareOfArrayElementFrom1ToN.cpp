// #include<iostream>
// using namespace std;
// int main(){
     
//     int arr[4];
//     int n;
//     cout<<"enter the array element :"<<" ";
//     for(int i = 0; i<=4; i++){
//         cin>>arr[i];
//     }
//     cout<<"square of Array element is :";
//       for(int i = 0; i<=4; i++){
//          cout<<arr[i]*arr[i]<<" ";
//     }
    
    

// }
 
 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter size :";
    cin>>n;

    int arr[n];

    // int square = arr[1];
    for(int i = 1; i <= n; ++i){
        arr[i - 1] = i * i;
    }

    cout << "Squares of natural numbers from 1 to " << n << " are:" << endl;
    for(int i = 0; i < n; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
 }

 