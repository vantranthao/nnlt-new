#include <bits/stdc++.h>
using namespace std;
template<class T>
void swapValue (T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template<class T>
void sort(T a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] < a[j]) {
				swapValue(a[i], a[j]);
			}
		}
	}
}

int main() {
	double arr[5] = {1.2, 4.2, 6.3, 5.7, 8.1};
	// xac dinh n!
	int n = sizeof(arr) / sizeof(arr[0]);
	sort<double>(arr, 5);
	cout << "Sorted Array:   ";
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
}
