#include <iostream>
using namespace std;
int Max(int a[], int n) {
	if (n == 1) return a[0];
	if (a[n-1] > Max(a, n-1)) return a[n-1];
	else return Max(a, n-1);
}
int main() {
	int n, *a;
	cout << "Moi nhap so phan tu n = "; cin >> n;
	a = new int[n];
	for(int i = 0; i < n; i++) {
		cout << "a[" << i << "] = "; cin >> a[i];
	}
	cout << "Cac phan tu cua mang: \n";
	for(int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
	cout << "\nPhan tu lon nhat trong mang: " << Max(a, n);
}
