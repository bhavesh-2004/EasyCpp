#include<iostream>
using namespace std;

void teacher(){
    cout<<"Teacher Name: prof.S.M.Mishra"<<endl;
    cout<<"Class Coordinator of T.Y.BTech"<<endl;
    return; // In void function return value does not nessecery;
}
int student(){
    cout<<"Student Name: mr.bhavesh sonawane"<<endl;
    cout<<"Student of T.Y.BTech"<<endl;
   
}

int main(){
    teacher();
    student();
    return 0;
}