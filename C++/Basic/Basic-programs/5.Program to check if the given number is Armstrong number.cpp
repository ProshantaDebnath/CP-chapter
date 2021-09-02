#include<iostream>
#include<math.h>
using namespace std;

    // An Armstrong number of three digits is an integer such that the 
	//sum of the cubes of its digits is equal to the number itself. 
	//For example, 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371.

	//save a copy of given number



int main(){
    int num, originalNumber, sum = 0, countDigit = 0;

    cout << "Enter the number : ";
    cin >> num;

    //save a copy of given number
    originalNumber = num;
    
    //count the digits
    while(num != 0){
        num = num / 10;
        countDigit ++;
    }

    // reassign number as number changed to 0
    num = originalNumber;

    //reverse the number
    while(num != 0){

        int lastDigit = num % 10;
        sum += pow(lastDigit, countDigit);
        num = num / 10;
    }

    if(sum == originalNumber)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;

}
