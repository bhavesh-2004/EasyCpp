#include<iostream>
using namespace std;

int fact(int y){
    int f = 1;
    for(int i = 1; i<=y; i++){
        f *= i;
    }
    return f;
}
int main(){
 int n;
    cout<<"Enter the n:";
    cin>>n;
    int r;
    cout<<"Enter the r:";
    cin>>r;

    int a = fact(n);
    int b = fact(n-r);
    
    cout<<a/b;

    return 0;

}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-5-functions_and_pointers> g++ permutation.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-5-functions_and_pointers> ./a.exe
Enter the n:5
Enter the r:2
20
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-5-functions_and_pointers>
*/ 