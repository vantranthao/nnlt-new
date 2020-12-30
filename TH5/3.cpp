// chua sua lai
#include <bits/stdc++.h>
using namespace std;
template<class T>
void PhepNhan(T &sum, T x, int n) {
//	sum = 1;
	// bye bye
	cout << 1 + x*((n+1)*n)/(2*1.0); // cthuc tong quat!
//	for (int i = 1; i <= n; i++ ) {
//		sum += i*x;
//	}
//	cout << sum;
}
int main() {
	int intSum, intx = 3, n = 5;
	PhepNhan(intSum, intx, n);
	cout << endl;
	double doubleSum, doublex = 3.1;
	PhepNhan(doubleSum, doublex, n);
}
