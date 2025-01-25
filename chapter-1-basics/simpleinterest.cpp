#include<iostream>
using namespace std;
int main()
{
// calculate simple interest
float P , R , T ;
cout<<"Enter the principle value:";
cin>>P;
cout<<"Enter the rate value:";
cin>>R;
cout<<"Enter the time value:";
cin>>T;
 float SI = (P*R*T)/100;
 cout<<"Simple Interest : "<<SI;
 return 0;
 
}