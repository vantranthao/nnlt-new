#include <iostream>
using namespace std;
int snt(int n, int i = 2) {
	if (n == 0 || n == 1) cout << "ok";
	else if(n % i == 0) cout << "khoong";
	
	else {
		if (i == n) cout << "ok";
		return snt(n, i+1);
	}
}
int main() {
	int n; cin >> n;
	snt(n);
}
