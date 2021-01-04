#include <iostream>
using namespace std;
class DongVat {
	protected:
		double canNang;
	public:
		DongVat(double w) {
			canNang = w;
		}
		virtual void inDL() {
			cout << "Can nang dong vat: " << canNang;
		}
};
class SuTu : public DongVat {
	double tocDo;
	public:
		SuTu(double w, double s) : DongVat(w){
//			canNang = w;
			tocDo = s;
		}
		void inDL() {
			cout << "Can nang su tu: " << canNang;
			cout << "\nToc do su tu: " << tocDo << endl;
		}
};
class TranNuoc : public DongVat {
	double chieuDai;
	public:
		TranNuoc(double w, double t) : DongVat(w) {
//			canNang = w;
			chieuDai = t;
		}
		void inDL() {
			cout << "Can nang tran nuoc: " << canNang;
			cout << "\nChieu dai tran nuoc: " << chieuDai; //m
		}
};

int main() {
	SuTu s1(100, 50);
	TranNuoc t1(10, 5);
	s1.inDL();
	t1.inDL();
	
	DongVat *dv1 = &t1; // depend on the origin of t1/s1
	// phu thuoc vao dia chi cua noi gan dia chi cho contro
	dv1->inDL();
	
	
	
	
	
}
