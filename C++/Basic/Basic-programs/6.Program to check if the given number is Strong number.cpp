// Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number. Given a number, check if it is a Strong Number or not.
// Examples: 
 

// Input  : n = 145
// Output : Yes
// Sum of digit factorials = 1! + 4! + 5!
                      //   = 1 + 24 + 120
                     //    = 145

// Input :  n = 534
// Output : No



#include<iostream>
using namespace std;


int FindFactorial(int n){
    int fact=1;
    for(int i=1; i <= n; i++){
        fact = fact * i;
    }
    return fact;

}

int main(){
    int lastDigit, originalNumber, factorial, num, sum = 0;

    cout << "Enter the number : ";
    cin >> num;

    originalNumber = num ;

    while(num != 0){

        lastDigit = num % 10;

        factorial = FindFactorial(lastDigit);

        sum = sum + factorial;

        num = num / 10;
    }

    if( sum == originalNumber)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

}
