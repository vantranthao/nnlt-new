#include <iostream>
using namespace std;
struct soPhuc {
	double phanThuc;
	double phanAo;
};
// input + output
void input(soPhuc&num1)  {
	cout << "Phan thuc: "; cin >> num1.phanThuc;
	cout << "Phan ao: "; cin >> num1.phanAo;
}
void output(soPhuc num1) {
	if (num1.phanAo > 0) {
		cout << num1.phanThuc << "+" << num1.phanAo << "i";
	}
	else cout << num1.phanThuc << num1.phanAo << "i";
}
// sum
soPhuc sum (soPhuc num1, soPhuc num2) {
	soPhuc c;
	c.phanThuc = num1.phanThuc + num2.phanThuc;
	c.phanAo = num1.phanAo + num2.phanAo;
	return c;
}
soPhuc minuss (soPhuc num1, soPhuc num2) {
	soPhuc c;
	c.phanThuc = num1.phanThuc - num2.phanThuc;
	c.phanAo = num1.phanAo - num2.phanAo;
	return c;
}
soPhuc mult (soPhuc num1, soPhuc num2) {
	soPhuc c;
	c.phanThuc = num1.phanThuc * num2.phanThuc;
	c.phanAo = num1.phanAo * num2.phanAo;
	return c;
}
soPhuc divi (soPhuc num1, soPhuc num2) {
	soPhuc c;
	c.phanThuc = num1.phanThuc / num2.phanThuc;
	c.phanAo = num1.phanAo / num2.phanAo;
	return c;
}
int main() {
	soPhuc num1, num2, tong, tru, nhan, chia; 
	input(num1); output(num1); cout << endl;
	input(num2); output(num2); cout << endl;
	// choice
	tong = sum(num1, num2);
	tru = minuss(num1, num2);
	nhan = mult(num1, num2);
	chia = divi(num1, num2);
	//output(tong);
	
	int choice; cin >> choice;
	switch(choice) {
		case 1:
			output(tong); break;
		case 2:
			output(tru); break;
		case 3:
			output(nhan); break;
		case 4:
			output(chia); break;
	}
}
