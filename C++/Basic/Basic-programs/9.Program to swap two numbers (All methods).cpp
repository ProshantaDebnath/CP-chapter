#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter the first number : " <<endl;
    cin >> a;
    cout << "Enter the second number : " << endl;
    cin >> b;

    // logic with three variable

    int temp = a;
    a = b ;
    b = temp;


    //with two variable

    a = a + b;
    b = a - b;
    a = a - b;

    //with bitwise operator - XOR

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout <<  "After swapping the number is : " << a << " , " << b;
}
