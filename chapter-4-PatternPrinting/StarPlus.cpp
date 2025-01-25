// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the n:";
//     cin>>n;
//  int mid = n/2 + 1;
//     int a = 1;

//     for(int i = 1; i<=n; i++){

//     for(int j = 1; j<=n; j++){
//         if(i==mid || j==mid){
//              cout<<"* ";
//         }
//             else {
//                 cout<<"  ";
//             }
//     }
//     cout<<endl;
//     }
// }
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ StarPlus.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:5
  *
  *
*****
  *
  *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:6
   *
   *
   *
******
   *  
   *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:8
    *
    *
    *
    *
********
    *   
    *
    *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:9
    *
    *
    *    
    *
*********
    *
    *
    *    
    *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting>
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ StarPlus.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:9
        *
        *
        *
        *
* * * * * * * * *
        *
        *
        *
        *
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting>
*/

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the rows:";
    cin>>m;
    cout<<"Enter the cols:";
    cin>>n;
    int mid = n/2;

    for(int i = 1; i<=m; i++){

    for(int j = 1; j<=n; j++){
          if(i==1 || j==1 || i==1+(m-1) || j==1+(n-1)  ){
           cout<<"* ";
        }
            else {
               cout<<"  ";
             }
       
        }
           cout<<endl;
    }
     
    }
