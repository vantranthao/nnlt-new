#include <iostream>
#include <cmath>
using namespace std;
void nhapData (double& a, double& b, double& c) {
	cout << "Canh thu nhat: "; cin >> a;
	cout << "Canh thu hai: "; cin >> b;
	cout << "Canh thu ba: "; cin >> c;
}
double cal (double& a, double& b, double& c, double p, double chuVi, double dienTich) {
	if (a+b>c && a+c>b && c+b>a) {
		p = (a+b+c)/2;
		chuVi = 2*p;
		dienTich = sqrt(p*(p-a)*(p-b)*(p-c));
		cout << chuVi << endl << dienTich;
	} else cout << "Sai roi!";
}

int main() {
	double a,b,c,p, dienTich, chuVi;
	nhapData(a,b,c);
	cal(a,b,c,p, chuVi, dienTich);
}
