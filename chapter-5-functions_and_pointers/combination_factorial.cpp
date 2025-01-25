#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i = 1; i<=x; i++){
        f *= i;
    }
    return f;

}

int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    int r;
    cout<<"Enter the r:";
    cin>>r;
   int a = fact(n);
   int b = fact(r);
   int c = fact(n-r);
   cout<<a/(b*c);

   return 0;
    
    
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-5-functions_and_pointers> g++ combination.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_of_cpp\chapter-5-functions_and_pointers> ./a.exe
Enter the n: 5
Enter the r: 2
10
*/  