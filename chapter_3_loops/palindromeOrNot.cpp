 
#include<iostream>
using namespace std;

int main() {
    int num, lastDigit, revnum = 0;
    cout << "Enter the number to check if it is a palindrome or not: ";
    cin >> num;

 
    int oldValue = num;
 
    if (num < 0 || (num % 10 == 0 && num != 0)) {
        cout << "No, it is not a palindrome." << endl;
        return 0;  
    }
 
    while (num != 0) {
        lastDigit = num % 10;  
        revnum = (revnum * 10) + lastDigit;  
        num /= 10;  
    }

    if (oldValue == revnum) {
        cout << "Yes, it is a palindrome." << endl;
    } else {
        cout << "No, it is not a palindrome." << endl;
    }

    return 0;
}
