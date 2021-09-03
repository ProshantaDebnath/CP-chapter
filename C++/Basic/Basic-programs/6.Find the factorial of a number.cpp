#include<iostream>
#include<math.h>
using namespace std;


int findFactorial(int n){
    int fact = 1;

    for(int i = 1 ; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}


int main(){
    int num;

    cout << "Enter the number : ";
    cin >> num;

    int factorial = findFactorial(num);
    cout << "Factorial of " << num << " is : " <<factorial;
}
