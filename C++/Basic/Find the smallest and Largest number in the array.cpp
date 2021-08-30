#include<iostream>
using namespace std;
#include<limits.h>

int main(){
    int arr[] = {100, 5, 201, 13, 4, -8,12,91,3,56};

    int smallest, largest;

    int arr_size = sizeof(arr) / sizeof(int);

    cout << "Array Elements are: ";
     for(int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
     }

    smallest = INT_MAX;
    largest = INT_MAX;

    for(int i = 0; i < arr_size; i++){
        if(smallest > arr[i])
            smallest = arr[i];
        if(largest > arr[i])
            largest = arr[i];
    }

    cout << "\nLargest element is : " << largest << endl;
    cout << "smallest element is : " << smallest ;

    return 0;

}
