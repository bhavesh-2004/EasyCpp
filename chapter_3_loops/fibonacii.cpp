#include<iostream>
using namespace std;

 int main(){
    int n, t1 = 0 , t2 = 1, nextterm;
    cout<<"enter the n:";
    cin>>n;
    
    cout<<"Fibonacci series is: "<<t1<<", "<<t2<<", ";
    nextterm = t1 + t2;
    while(nextterm<=n){
        cout<<nextterm<<", ";
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
    return 0;
 }
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter_3_loops> g++ fibonacii.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter_3_loops> ./a.exe           
enter the n:5
Fibonacci series is: 0, 1, 1, 2, 3, 5,
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter_3_loops> g++ fibonacii.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter_3_loops> ./a.exe
enter the n:10
Fibonacci series is: 0, 1, 1, 2, 3, 5, 8,
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter_3_loops>
*/  