#include<iostream>
using namespace std;

int main(){
    int num, perfectNumber,sum=0;

    cout << "Enter the number : ";
    cin >> num ;

    perfectNumber = num;

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum = sum + i;
        }
    }

    if(sum == perfectNumber)
        cout << "Perfect";
    else
        cout << "Not perfect";

    return 0;

}
