#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of square : ";
    cin>>n;

    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
             if((i==j)||(i+j)%(n+1)==0){
                cout<<"* ";
             }
             else{
                cout<<" ";
             }
        }
         cout<<endl; 
    }
    
    
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ StarCross.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the number of square : 5
    * 
   *
  *
 *
*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ StarCross.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the number of square : 5
*    *
 *  *
  *
 *  *  
*    *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ StarCross.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the number of square : 5
*
 *
  *
   *
    *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ StarCross.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the number of square : 5
*    *
 *  *
  *
 *  *
*    *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> 
*/