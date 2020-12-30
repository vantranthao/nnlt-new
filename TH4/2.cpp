#include <iostream>
#include <string>
using namespace std;
class Employee {
	protected:
		string name;
		int age;
		double salary;
	public:
		Employee() {
			name = "Nguyen Van A";
			age = 20;
			salary = 1000;
		}
		Employee (string name1, int age1, double sal1) {
			name = name1;
			age = age1;
			salary = sal1;
		}
		// get
		string getName() {
			return name;
		}
		int getAge() {
			return age;
		}
		double getSalary() {
			return salary;
		}
		// set
		string setName(string n) {
			name = n;
		}
		int setAge(int a) {
			age = a;
		}
		double setSalary(double s) {
			salary = s;
		}
		// func
		void selfIntroduce() {
			cout << "I am an employee";
		}
		void output() {
			cout << "----------------\n";
			//cout << name << endl << age << endl << salary;
			cout << "Ten: " << name << endl << "Tuoi: " << age << endl << "Luong: " << salary << endl;
			selfIntroduce(); cout << endl;
		}
};
class Doctor : public Employee { // ke thua
	private:
		double fee; // phi kham benh
		string speciality; // chuyen mon bsi
	public:
		Doctor():Employee() {
			fee = 10;
			speciality = "Mo bung";
		}
		Doctor(string ten, int tuoi, double luong, double phi, string chuyenMon):Employee(ten, tuoi, luong){
			
			fee = phi;
			speciality = chuyenMon;
		}
		// get
		double getFee() {
			return fee;
		}
		string getSpeciality() {
			return speciality;
		}
		// set
		double setFee( double f) {
			fee = f;
		}
//		string speciality(string s) {
//			speciality = s;
//		}
		void selfIntroduce() { // how to inheritate ? 
			cout << "I am a doctor";
		}
		void output() {
			cout << "-----------------\n";
			cout << "Ten bsi: " << name << endl << "Tuoi: " << age << endl << "Luong: " << salary << endl;
			cout << "Phi kham: " << fee << endl << "Chuyen mon: " << speciality << endl;
			selfIntroduce(); cout << endl;
		}
};
int main() {
	Employee a0; a0.output(); // fix cung!
	Employee a("Van thao", 21, 1200), b;
	a.output();
	
	Doctor a1("Lisa", 19, 1000, 120, "Phu san");
	a1.output();
}
