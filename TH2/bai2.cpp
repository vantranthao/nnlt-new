#include <iostream>
using namespace std;
class hinhTron {
	public:
		// constructor
		hinhTron(double r);// => banKinh;
		hinhTron(); // => 1
		
		// func
		double getBanKinh() {
			return banKinh;
		}
		void input() {
			cout << "Nhap ban kinh: "; cin >> banKinh;
		}
		double output() {
			return banKinh*banKinh*3.1416;
		}
		double testR() {
			if (banKinh < 0) {
				cout << "Sai roi";
			}
		}
		
	private:
		double banKinh;
};
// constructor
hinhTron::hinhTron(double r):banKinh(r) {
	testR();
}
hinhTron::hinhTron():banKinh(1) {}

int main() {
	hinhTron c1(2), c2;
	double result1, result2;
	//c1.input(); c2.input();
	result1 = c1.output();
	result2 = c2.output();
	cout << result1 << endl << result2 ;
}
