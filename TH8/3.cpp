#include <iostream>
using namespace std;
const double PI = 3.1416;
class HinhTron {
	int *r;
	public:
		int layBanKinh() {
			return *r;
		}
		HinhTron(int bk) {
			int *r = &bk;
			
		}
		HinhTron(const HinhTron &obj) {
			r = obj.r;
		}
		~HinhTron();
};
void DienTich(HinhTron obj) {
	int t = obj.layBanKinh();
	cout << "Dien tich hinh tron: " << t*t*PI << endl;
}
int main() {
	HinhTron a(10);
	
}
