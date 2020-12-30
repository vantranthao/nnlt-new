#include <iostream>
#include <cmath>
using namespace std;
// nhap data
void nhapData (int& h, int& m) {
	cout << "Moi nhap gio, phut (dang 24h): \n";
	cout << "Gio: "; cin >> h;
	cout << "Phut: "; cin >> m;
}
// transfer
void transfer (int& h, int& m, char& t) {
	t = 'A'; //fix cung t
	if (h >= 12) {
		if (h > 12) h-=12;
		t = 'P';
	} // case con lai giu nguyen!
}

// xuat data
void xuatData (int& h, int& m, char& t) {
	cout << "Gio, phut (dang 12h): \n" << h << ":" << (m<10?"0":"") << m << (t=='A'?" A.M":" P.M");
}

int main() {
	int h,m;
	char t;
	nhapData(h,m);
	transfer(h,m,t);
	xuatData(h,m,t);
}
