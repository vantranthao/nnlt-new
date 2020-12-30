#include <iostream>
using namespace std;
class HoaDon {
	private:
		int soLuong;
		double giaCa;
	public:
		HoaDon() {
			soLuong = 1; giaCa = 10;
		}
		HoaDon(int sl, double gc) {
			soLuong = sl; giaCa = gc;
		}
		double tongTien() {
			return soLuong*giaCa;
		}
		void setGiaCa(double giaMoi) {
			giaCa = giaMoi;
		}
		void inHoaDon() {
			cout << "--------------" << endl;
			cout << "Hoa don cua spham hien co!" << endl;
			cout << "So spham: " << soLuong << endl;
			cout << "Gia spham: " << giaCa << endl;
			cout << "Tong tien : " << tongTien() << endl;
		}
};
class HoaDonKM : public HoaDon {
	private:
		double giamGia;
	public:
		HoaDonKM():HoaDon() {
			giamGia = 2;
		}
		HoaDonKM(int sl, double gc, double gg):HoaDon(sl, gc) {
			giamGia = gg;
		}
		double thanhToan() {
			return tongTien() - giamGia;
		}
		void inHoaDon() {
			HoaDon::inHoaDon();
			cout << "So tien duoc giam gia: " << giamGia << endl;
			cout << "So tien phai thanh toan: " << thanhToan() << endl;
		}
};
int main () {
	HoaDon d;
	d.inHoaDon();
	
	HoaDon d1(5,3);
	d1.inHoaDon();
	
	HoaDonKM km;
	km.inHoaDon();
	
	//HoaDon km1(3,5,2);
	//km1.inHoaDon();
}
