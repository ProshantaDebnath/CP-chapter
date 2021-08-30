// C++ program to find the second largest element in the array
#include <iostream>
using namespace std;

int main() {
	int arr[] = {100, 12, 200, 4,5};
	int n = sizeof(arr)/sizeof(int);
    int largest = 0, secondLargest = -1;

	// finding the largest element in the array
	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[largest])
			largest = i;
	}

	// finding the largest element in the array excluding
	// the largest element calculated above
	for (int i = 0; i < n; i++) {
		if (arr[i] != arr[largest]) {
			// first change the value of second largest
			// as soon as the next element is found
			if (secondLargest == -1)
				secondLargest = i;
			else if (arr[i] > arr[secondLargest])
				secondLargest = i;
		}
	}

	if (secondLargest == -1)
        cout << "Second largest didn't exit\n";
        else
        cout << "Second largest : " << arr[secondLargest];
}

