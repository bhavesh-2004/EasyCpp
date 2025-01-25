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
            cout<<j<<" ";
        }
         cout<<endl;
    }
    
    
    
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ NumberSquare.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the number of square : 6
1 1 1 1 1 1
2 2 2 2 2 2
3 3 3 3 3 3
4 4 4 4 4 4
5 5 5 5 5 5
6 6 6 6 6 6
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of square : ";
//     cin>>n;

//     for (int i = 1; i<=n; i++)
//     {
//         for (int j = 1; j<=n; j++)
//         {
//             cout<<i<<" ";
//         }
//          cout<<endl;
//     }
    
    
    
// }
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ NumberSquare.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the number of square : 6
1 2 3 4 5 6
1 2 3 4 5 6
1 2 3 4 5 6
1 2 3 4 5 6
1 2 3 4 5 6
1 2 3 4 5 6
*/
