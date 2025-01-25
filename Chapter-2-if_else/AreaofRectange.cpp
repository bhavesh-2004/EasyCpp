#include<iostream>
using namespace std;
int main(){
    int l,b,area,perimeter;
    cout<<"enter the length of rectangle:";
    cin>>l;
     cout<<"enter the breath of rectangle:";
    cin>>b;

    area = l*b;

    cout<<"Area of rectangle:"<<area<<endl;

    perimeter = 2*(l+b);

    cout<<"Perimeter of rectangle:"<<perimeter<<endl;

    if(area>perimeter){
        cout<<"area of rectangle is greater than perimeter of rectangle"<<endl;
    }
    else{
        cout<<"area of rectangle is lesser than perimeter of rectangle";
    }
    return 0;
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_2_if_else> g++ AreaofRectange.cpp
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_2_if_else> ./a.exe
enter the length of rectangle:5
enter the breath of rectangle:4
Area of rectangle:20
Perimeter of rectangle:18
area of rectangle is greater than perimeter of rectangle
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_2_if_else> ./a.exe
enter the length of rectangle:3
enter the breath of rectangle:2
Area of rectangle:6
Perimeter of rectangle:10
area of rectangle is lesser than perimeter of rectangle
PS C:\Users\Lenovo\Desktop\C++ practice\chapter_2_if_else>
*/