#include <iostream>
using namespace std;
class Nguoi {
	string hoten;
	public:
		virtual void nhap() {
			cout << "Nhap ten nguoi: "; 
			getline(cin, hoten);
		}
		virtual void xuat() {
			cout << "\nHo ten: " << hoten << endl;
		}
		virtual bool thuong() = 0; // phuong thuc thuan ao
};
class Sinhvien : public Nguoi {
	double dtb; // diem trung binh
	public:
		void nhap() {
			cout << "Nhap diem TB: "; cin >> dtb;
		}
		virtual bool thuong() {
			if (dtb > 8) return true;
		}
		void xuat() {
			cout << "thuong sv\n";
		}
		
};
class Giangvien : public Nguoi {
	int soBaiBao; // so bai bao!
	public:
		void nhap() {
			cout << "Nhap so bai bao: "; cin >> soBaiBao;
		}
		virtual bool thuong() {
			if (soBaiBao > 3) return true;
		}
		void xuat() {
			cout << "thuong gv\n";
		}
		
};
class Nhanvien : public Nguoi {
	int ngayNghi;
	public:
		void nhap() {
			cout << "ngay nghi: "; cin >> ngayNghi;
		}
		virtual bool thuong() {
			if (ngayNghi < 5) return true;
		}
		void xuat() {
			cout << "thuong nvien\n";
		}
};
int main() {
	Nguoi *ds[100];
	int k = 0, chon, i;
	while(1) {
		cout << "\nFV/SV/Nghi/Ngung (1,2,3,4): "; cin >> chon; cin.ignore();
		if(chon == 4) break;
		if(chon == 1) ds[k] = new Giangvien();
		if(chon == 2) ds[k] = new Sinhvien();
		if(chon == 3) ds[k] = new Nhanvien();
		ds[k]->nhap();
		k++;
	}
	cout << "Danh sach nguoi duoc thuong: \n";
	for (i = 0; i < k; i++) {
		if(ds[i]->thuong()) {
			ds[i]->xuat();
		}
	}
	return 0;
}
