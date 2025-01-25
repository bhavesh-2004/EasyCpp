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
        if(i%2==0){
            cout<<(char)(j+64);
        }
        else{
           cout<<j; 
        }
        }
        cout<<endl;
    }
    
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ numberTriangle.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:5
1
AB
123
ABCD
12345
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:6
1
AB
123
ABCD
12345
ABCDEF
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> 
*/ 