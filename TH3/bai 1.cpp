#include <iostream>
using namespace std;

class time{
	private:
		int hrs;
		int mins;
		int secs;
	public:
		time(); // ham tao ko tham so
		time(int h, int m, int s); // ham toa 3 tham so
		int getHrs() const;
		int getMins() const;
		int getSecs() const;
		void setHrs(int h); //dat gio
		void setMins(int m); //dat phut
		void setSecs(int s); //dat giay
		void chuanhoa(); // chuan hoa thoi gian
		void in(); //nhap
		void out(); //xuat
};
const time operator +(const time& t1, const time& t2); //nap chong toan tu +
const time operator -(const time& t1, const time& t2); //nap chong toan tu -
bool operator ==(const time& t1, const time& t2); //nap chong toan tu ==
const time operator -(const time& t1); //dao dau
const time operator ++(const time& t1); //tang giay len +1
const time operator ++( time&t1, int); //tang giay len 1+

int main(){
	time t1, t2(12,1,1), t3;
	cout << "Bien t1: ";
	t1.out();
	cout << "Bien t2: ";
	t2.out();
	cout << "Nhap du lieu cho t3:" << endl;
	t3.in();
	t3.out();
	time t4;
	cout << "Nhap du lieu cho t4:\n";
	t4.in();
	t4.out();
	time tong = t3 + t4;
	cout << "TONG t3 + t4: ";
	tong.out();
	time hieu = t3 - t4;
	cout << "HIEU t3 - t4: ";
	hieu.out();
	cout << "SO SANH, t3 = t4 ?: ";
	if (t3 == t4)
		cout << "True\n";
	else 
		cout << "Flase!\n";
	time daodau = -t3;
	cout << "DAO DAU t3: ";
	daodau.out();
	time plus1 = ++t3;
	cout << "+1s: ";
	plus1.out();
	time plus2 = t4++;
	cout << "1s+: ";
	plus2.out();
	t4.out();
}
time::time(): hrs(0), mins(0), secs(0){
}
time::time(int h, int m, int s): hrs(h), mins(m), secs(s){
		chuanhoa();
}
void time::chuanhoa(){
	int s = secs;
	int m = mins;
	int h = hrs;
	secs = s%60;
	m += s/60;
	mins = m%60;
	hrs = h + m/60;
}
int time::getHrs() const{
	return hrs;
}
int time::getMins() const{
	return mins;
}
int time::getSecs() const{
	return secs;
}
void time::in(){
	cout << "Nhap gio: ";
	cin >> hrs;
	cout << "Nhap phut: ";
	cin >> mins;
	cout << "Nhap giay: ";
	cin >> secs;
	chuanhoa();
}
void time::out(){
	if (mins < 0 || secs <0)
		cout << hrs<<" gio, "<< mins<<" phut, " << secs<<" giay.\n";
	else if (mins < 10 && secs < 10)
		cout << hrs<<" gio, "<< "0" << mins<<" phut, " << "0" << secs<<" giay.\n";
	else if (mins >= 10 && secs < 10)
		cout << hrs<<" gio, "<< mins<<" phut, " << "0" << secs<<" giay.\n";
	else if (mins < 10 && secs >=10)
		cout << hrs<<" gio, "<< "0" << mins<<" phut, " << secs<<" giay.\n";
	else if (mins ==10 && secs ==10)
		cout << hrs<<" gio, "<< mins<<" phut, " << secs<<" giay.\n";
	else if (mins > 10 && secs > 10)
		cout << hrs<<" gio, "<< mins<<" phut, " << secs<<" giay.\n";
	else
		cout << hrs<<" gio, "<< mins<<" phut, " << secs<<" giay.\n";
		
}
const time operator +(const time& t1, const time& t2){
	int all1 = t1.getHrs()*3600 + t1.getMins()*60 + t1.getSecs();
	int all2 = t2.getHrs()*3600 + t2.getMins()*60 + t2.getSecs();
	return time(0, 0, all1 + all2);
}
const time operator -(const time& t1, const time& t2){
	int all1 = t1.getHrs()*3600 - t1.getMins()*60 - t1.getSecs();
	int all2 = t2.getHrs()*3600 - t2.getMins()*60 - t2.getSecs();
	return time(0, 0, all1 - all2);
}
bool operator ==(const time& t1, const time& t2){
	
	return ((t1.getHrs()==t2.getHrs()) && t1.getMins() == t2.getMins() && t1.getSecs() == t2.getSecs());
}
const time operator -(const time& t1){
	int h = t1.getHrs()*3600 + t1.getMins()*60 + t1.getSecs();
	return time(0, 0, -h);
}
const time operator ++(const time& t1){
	int h = t1.getHrs();
	int m = t1.getMins();
	int s = t1.getSecs();
		++s;
	return time(h, m, s);
}
const time operator ++( time& t1, int){
	int h = t1.getHrs();
	int m = t1.getMins();
	int s = t1.getSecs();
	time T(h, m, s);
		++s;
	t1.setSecs(s);
	return T;
}
void time::setHrs(int h){
 hrs = h;
}
// Dat so phut
void time::setMins(int m){
 mins = m;
}
// Dat so giay
void time::setSecs(int s){
 secs = s;
}
