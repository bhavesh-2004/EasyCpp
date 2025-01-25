#include<iostream>
using namespace std;

void print(int n ){
    if(n==0)
    return;
    cout<<n<<endl;
    print(n-1);
}
int main(){
    print(10);
    return 0;
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp> cd chapter-6-Recursion
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-6-Recursion> g++ 1to10num.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-6-Recursion> ./a.exe  
10
9
8
7
6
5
4
3
2
1
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-6-Recursion>
*/ 

