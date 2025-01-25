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
          cout<<(char)(j+64);
        }
        cout<<endl;
    }
    
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ AlphabetTriangle.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:5
A
AB
ABC
ABCD
ABCDE
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> 
*/ 