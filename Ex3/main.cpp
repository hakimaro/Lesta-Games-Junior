#include <iostream>
#include "MergeSort.h"

using namespace std;

void printArray(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main()
{
	MergeSort sort;
 	int arr[] = { 3, 2, 1, 232, 12, 2, 3, 4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, size);
	sort.mergeSort(arr, 0, size-1);
	printArray(arr, size);
	return 0;
}