#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the percentage of student:";
    cin>>n;

    if(n>=81 && n<=100){
        cout<<"the grade of student is very good";
    }
    else if(n>=61 && n<=80){
        cout<<"the grade of student is good";
    }
    else if(n>=41 && n<=60){
        cout<<"the grade of student is Average";
    }
   else if(n<=40){
        cout<<"the grade of student is fail";
    }
    else{
        cout<<"Invalid";
    }
    return 0;

}