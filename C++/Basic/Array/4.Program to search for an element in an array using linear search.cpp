
#include<iostream>
using namespace std;

int linearsearch(int arr[], int x,int n){

    int i;
    for(i = 0; i < n; i++)
    if(arr[i]== x)
        return i;
    return -1;
}


int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(int);

    int x;
    cout << "Enter the element want to search : " ;
    cin >> x;

    int result = linearsearch(arr, x, n);

    (result == -1)
        ? cout << "Element does not exists."
        : cout << "Search item present at index :" << result;
    return 0;
}

//The time complexity of the above algorithm is O(n). 
