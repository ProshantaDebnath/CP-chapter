#include<iostream>
using namespace std;

int main(){
    int num, flag;

    cout << "Enter the positive number:";
    cin >> num;

    for(int i = 0 ; i <= num; i++){
        if(num % 2 == 0){
            flag = 1;
        }
    }

    if(num <= 0)
        cout << "the number is not valid.";
    else if(flag == 1)
        cout << "EVEN" <<endl;
    else
        cout << "ODD";

    return 0;

    }

    
