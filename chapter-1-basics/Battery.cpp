#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Your Phone Battery Percentage:";
    cin>>a;
    
    if(a<=20)
        {
      cout<<"Please Charge Your Phone ";  
        }
    else
        {
            cout<<"Battery Of Your Phone Is Good , Don't charge your phone ";
        }
    return 0;
}
/*
PS C:\Users\Lenovo\Desktop\C++ practice> g++ Battery.cpp
PS C:\Users\Lenovo\Desktop\C++ practice> ./a.exe                 
Enter Your Phone Battery Percentage:45
Battery Of Your Phone Is Good , Don't charge your phone
PS C:\Users\Lenovo\Desktop\C++ practice> ./a.exe
Enter Your Phone Battery Percentage:14
Please Charge Your Phone
PS C:\Users\Lenovo\Desktop\C++ practice>

*/