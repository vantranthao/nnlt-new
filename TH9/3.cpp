#include <iostream>
using namespace std;
int nguoc(int n) {
	if (n < 10) return n;
	else {
		cout << (n%10) << endl;
		nguoc(n/10);
	}
}
int main() {
	cout << nguoc(123);
}
