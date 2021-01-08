#include <iostream>
using namespace std;
int fibonacci(int x) {
	if(x == 1 || x == 2) return 1;
	return fibonacci(x-1) + fibonacci(x-2);
}
int main() {
	int n; cin >> n;
	cout << fibonacci(n);
	return 0;
}
