#include <bits/stdc++.h>
using namespace std;
template <class T> 
class PhepToan {
	T var1;
	T var2;
	public:
		PhepToan();
		PhepToan(T x, T y);
		void nhapDL();
		void xuatDL(T var1, T var2);
		T sum();
		T tich();
};
template <class T>
PhepToan<T>::PhepToan() {}

template <class T>
PhepToan<T>::PhepToan(T x, T y) {
	var1 = x;
	var2 = y;
}
// nhap
template <class T>
void PhepToan<T>::nhapDL() {
	cout << "Nhap bien 1: "; cin >> var1;
	cout << "Nhap bien 2: "; cin >> var2;
}
// xuat
template <class T>
void PhepToan<T>::xuatDL(T var1, T var2) {
	cout << var1 << "\t" << var2;
}
// +
template <class T>
T PhepToan<T>::sum(){
	T result = var1 + var2;
	return result;
}
// *
template <class T>
T PhepToan<T>::tich(){
	T result = var1*var2;
	return result;
}
int main() {
	// CONG
//	int sum = 0;
//	PhepToan<int> var1;
//	var1.nhapDL();
//	sum = var1.sum();
//	cout << sum;
	
//	double sum = 0;
//	PhepToan<double> var1;
//	var1.nhapDL();
//	sum = var1.sum();
//	cout << sum;

	// NHAN
//	int tich = 1;
//	PhepToan<int> var1;
//	var1.nhapDL();
//	tich = var1.tich();
//	cout << tich;

//	double tich = 1;
//	PhepToan<double> var1;
//	var1.nhapDL();
//	tich = var1.tich();
//	cout << tich;
}
