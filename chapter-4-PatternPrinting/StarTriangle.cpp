#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    for (int  i = 1; i<=n; i++)
    {
        for( int j = 1; j<=i; j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ StarTriangle.cpp    
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:5
*
* *
* * *
* * * *
* * * * *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:8
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> 
*/ 