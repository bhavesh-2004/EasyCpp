 #include<iostream>
using namespace std;

void print(int x,int n){
    if(x>n)  //base case
    return;
    cout<<x<<endl; //work
    print(x+1,n); // call
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    print(1,n);
}