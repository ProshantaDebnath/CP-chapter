#include<iostream>
using namespace std;

int main(){
    int num, lastDigit, originalNumber;
    int reverseNumber =0;

    cout << "Enter the number : ";
    cin >> num;

    originalNumber = num;

    while(num != 0){
        lastDigit = num % 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        num = num / 10;
    }

    if(originalNumber == reverseNumber)
        cout << "Number is palindrome";
    else
        cout << "Not Palindrome" << endl;

    return 0;

}
