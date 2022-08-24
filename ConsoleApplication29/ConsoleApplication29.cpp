#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

void swapAlternate(int arr[], int n) {
	for (int i = 0; i < n; i += 2) {
		if (i + 1 < n) {
			swap(arr[i], arr[i + 1]);
		}
	}
}
int main() {
	int arr[] = { 2,4,6,8,3,5,7,9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	swapAlternate(arr, n);
	printArray(arr, n);
	return 0;
}