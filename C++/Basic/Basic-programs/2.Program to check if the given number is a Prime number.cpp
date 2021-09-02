#include<iostream>
using namespace std;

int main(){
    int num, flag;

    cout << "Enter the positive number:";
    cin >> num;

    for(int i = 2 ; i <= num/2; i++){
        if(num % i == 0){
            flag = 1;
        }
    }

    if(num <= 0)
      cout << "the number is not valid.";
    else if(num == 1 )
        cout << "The number is not prime not composite." << endl;
    else if(flag == 1)
        cout << "The number is composite" <<endl;
    else
        cout << "prime number";

    return 0;
    
    }

    //Time complexity of this solution is O(n)
