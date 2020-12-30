#include <iostream>
using namespace std;
class SinhVien {
	protected:
		string tensv;
		int masv;
		string gioitinh;
	public:
		SinhVien() {
			tensv = "Nguyen Van A";
			masv = 1;
			gioitinh = "Male";
		}
		SinhVien(string t, int m, string gt) {
			tensv = t;
			masv = m;
			gioitinh = gt;
		}
		void nhapDL() {
			cout << "Nhap ten sv: "; getline(cin, tensv);
			cout << "Nhap ma sv: "; cin >> masv;
			cout << "Gioi tinh: (Male/Female?): "; cin >> gioitinh;
		}
		void hienThi() {
			cout << "Thong tin sinh vien: "; cout << endl;
			cout << tensv << endl << masv << endl << gioitinh << endl;
		}
		// get
		string getTen() {
			return tensv;
		}
		int getMa() {
			return masv;
		}
		string getGioiTinh() {
			return gioitinh;
		}
		// set
		string setTen(string t) {
			tensv = t;
		}
		int setMa(int m) {
			masv = m;
		}
		string setGioiTinh(string gt) {
			gioitinh = gt;
		}
};
class KhoaHoc {
	protected:
		string tenkh;
		int hocky;
		string mucdo; // do kho cua khoa hoc
	public:
		KhoaHoc() {
			tenkh = "Ky su CNTT";
			hocky = 1;
			mucdo = "Trung binh";
		}
		KhoaHoc(string t, int hk, string md) {
			tenkh = t;
			hocky = hk;
			mucdo = md;
		}
		void nhapDL() {
			cout << "Ten khoa hoc: "; cin.ignore(1); getline(cin, tenkh); 
			cout << "Hoc ky: "; cin >> hocky;
			cout << "Muc do: "; cin >> mucdo;
		}
		void hienThi() {
			cout << "Thong tin khoa hoc: "; cout << endl;
			cout << tenkh << endl << hocky << endl << mucdo;
		}
		// get
		string getTen() {
			return tenkh;
		}
		int getHocKy() {
			return hocky;
		}
		string getMucDo() {
			return mucdo;
		}
		// set
		string setTen(string t) {
			tenkh = t;
		}
		int setHocKy(int hk) {
			hocky = hk;
		}
		string setMucDo(string md) {
			mucdo = md;
		}
};
class HocBong:public SinhVien, public KhoaHoc{
	private:
		double giatri;
	public:
		HocBong():SinhVien(),KhoaHoc() { // 30tr
			tensv = "Nguyen Van A";
			masv = 1;
			gioitinh = "Male";
			giatri = 30000000;
		}
		HocBong(string t1, int m, string gt, string t2, int hk, string md, double gtri):SinhVien(t1, m, gt), KhoaHoc(t2, hk, md) {
			giatri = gtri;
		}
		// get
		double getGiaTri() {
			return giatri;
		}
		// set
		double setGiaTri(double gt) {
			giatri = gt;
		}
		void hienThi() {
			cout << "\nThong tin sinh vien duoc nhan hoc bong: " << endl;
			cout << "Ten sv: " << tensv << endl << "Ma sv: " << masv << endl << "Gioi tinh: " << gioitinh << endl;
			cout << "Ten khoa hoc: " << tenkh << endl << "Hoc ky: " << hocky << endl;
			cout << "Gia tri hoc bong: " << giatri;
		}
};
int main() {
SinhVien a0; 
a0.nhapDL();
a0.hienThi();
	
KhoaHoc a1;
	a1.nhapDL();
a1.hienThi();
	
//	HocBong b("Van", 132, "Male", "CNTT", 2, "kho", 345678);
//	b.hienThi();
}
