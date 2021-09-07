
#include<iostream>
using namespace std;


int main(){
    int num, countDigit = 0;

    cout << "Enter the number : ";
    cin >> num;

    int originalNumber = num;
    while( num != 0){
        num = num / 10;
        countDigit ++;
    }

    cout << "Number of Digit present in this " << originalNumber << " is : " <<countDigit;
}


//method 2

#include<stdio.h>

int main(){

	int number,lastDigit,count=0,sum=0;

	printf("Enter a positive integer: ");
	scanf("%d",&number);

	// count digits
	while(number != 0){

		//logic to split numbers
		lastDigit = number % 10;
		count++;
		sum = sum + lastDigit;
		number = number / 10;

	}

	printf("The number has %d digits and their sum is %d\n",count,sum);

	
}
