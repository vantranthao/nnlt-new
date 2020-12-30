#include <iostream>
#include <cmath>
using namespace std;

void cal (int& money, int& quarter, int& dime, int& penny, int& a) {
	cout << "Money: "; cin >> money;
	if (money<99 && money>1) {
		quarter = money/25;
		a = money%25;
		dime = a/10;
		penny = a%10;
		cout << "Quarter: " << quarter << endl << "Dime: " << dime << endl << "Penny: " << penny;
	} else cout << "Nhap sai!";
}

int main() {
	int money, quarter, dime, a, penny; 
	cal (money, quarter, dime, penny, a);
//	quarter = money/25; // 3
//	a = money%25;  // 11
//	dime = a/10; // 1
//	penny = a%10;
//	cout << quarter << dime << penny;
}
