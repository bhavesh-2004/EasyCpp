#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;

    for (int i = 1; i<=n ; i++)
    {
        for(int j = 1; j<=i; j++){   //hint:: i+j(max)=n+1

            cout<<n+1-j;
        }
        cout<<endl;
    }
    
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:4
4321
432
43
4
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ NumReFlipTriangle.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:5
54321
5432
543
54
5
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting>
*/ 