#include <string>
#include <vector>
#include <iostream>
using namespace std;
struct Sinhvien
{
 	string tensv;
 	int masv;
// 	std::vector<double> diem;
	int n;
	int *diem = new int[n];
};
void khoitaoSv(Sinhvien *ptr){
	int n;
	cout << "Co tat ca bao nhieu diem? "; cin >> ptr->n;
//	struct Sinhvien resizeScore[n];
//	for(int i = 0; i < n; i++) {
//		resizeScore[i].diem.resize(n);
//	}
	
	cout << "Nhap ten sinh vien: "; cin >> ptr->tensv;
	cout << "Nhap ma sinh vien: "; cin >> ptr->masv;
	
	for (int i = 0; i < ptr->n; i++) {
		cout << "Nhap mot diem: ";
		cin >> *(ptr->diem+i);
	}
} 
void hienthiSv(Sinhvien *ptr) {
	//cout << "\nThong tin sinh vien: " << endl;
	cout << "Ten: " << ptr->tensv << endl;
	cout << "Ma: " << ptr->masv << endl;
	for (int i = 0; i < ptr->n; i++) {
		cout << "Diem " << i << ":" << *(ptr->diem+i) << endl;
	}
}
int main ()
{
// 	Sinhvien sv; 
// 	Sinhvien* svPtr = &sv; 
// 	khoitaoSv(&sv); 
// 	hienthiSv(&sv);
 	
 	int n; cout << "So luong sinh vien: "; cin >> n;
 	Sinhvien *A = new Sinhvien[n];
 	for(int i = 0; i < n; i++) {
 		cout << "Nhap sinh vien " << i+1 << ": " << endl;
 		khoitaoSv(A);
 		cout << endl;
	}
	for(int i = 0; i < n; i++) {
		cout << "Thong tin sinh vien: \n";
		cout << "Sinh vien " << i+1 << ": ";
		hienthiSv(A);
	}
} 
