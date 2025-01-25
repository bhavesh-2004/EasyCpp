#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the m:";
    cin>>m;
    cout<<"Enter the n:";
    cin>>n;

    for(int i = 1; i<=m; i++){
        for(int j = 1; j<=n; j++){
            if(i==1 || j==1 || i==1+(m-1) || j==1+(n-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ StarHollwSquare.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the m:4
Enter the n:6
* * * * * *
*         * 
*         *
* * * * * *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the m:6
Enter the n:8
* * * * * * * *
*             *
*             * 
*             *
*             *
* * * * * * * * 
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting>
*/ 