#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){

    int num;

    cout << "Enter the Year to check Leap Year or Not : ";
    cin >> num;

    if ((num % 4 == 0 ) && (num % 100 != 0) || ( num % 400 == 0))
        cout << num << " is Leap Year.";
    else
        cout << num << " is not Leap Year.";

    return 0;

}
