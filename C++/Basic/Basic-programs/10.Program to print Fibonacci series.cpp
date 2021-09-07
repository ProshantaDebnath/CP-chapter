#include<iostream>
using namespace std;

int main(){
    int t1, t2, num, nextTerm;

    cout << "Enter the first term : ";
    cin >> t1;
    cout << "Enter the second term : ";
    cin >> t2;
    cout << "Enter the number of terms : ";
    cin >> num;

    nextTerm = t1 + t2;

    cout << " Series as : " << t1 <<" " << t2 <<" ";

    for(int i = 3; i <= num; i++){
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}
