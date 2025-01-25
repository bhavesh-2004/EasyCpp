// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the n:";
//     cin>>n;
//     for (int  i = 1; i<=n; i++)
//     { int a = 1;
//         for( int j = 1; j<=i; j++)
//         {   
//           cout<<a<<" ";
//           a += 2;
//         }
//         cout<<endl;
//     }
    
// }

/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ OddNumberTriangle.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:4
1
1 3
1 3 5
1 3 5 7
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ OddNumberTriangle.cpp
*/ 
 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    for (int  i = 1; i<=n; i++)
    { int a = 2;
        for( int j = 1; j<=i; j++)
        {   
          cout<<a<<" ";
          a += 2;
        }
        cout<<endl;
    }
    
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> g++ OddNumberTriangle.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> ./a.exe
Enter the n:8
2
2 4
2 4 6
2 4 6 8
2 4 6 8 10
2 4 6 8 10 12
2 4 6 8 10 12 14 
2 4 6 8 10 12 14 16
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-4-PatternPrinting> 
*/ 
 