#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;

    for (int i = 0; i<n ; i++)
    {
        for(int j=0;j<n;j++){
            if(i == j || n - i - 1 == j){
                cout << "*" ;
            }

        }
    }
    return 0;
    
}
/*
 
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ StarFlipTrangle.cpp 
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:9
*********
********
*******
******
*****
****
***
**
*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
*/ 