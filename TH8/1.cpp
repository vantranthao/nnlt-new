#include <iostream>
using namespace std;
class A {
	static int dem;
	public:
		A() {
			cout << " A_Constructor!\n";
		}
		~A() {
			cout << dem;
			cout << " A_Destructor!\n";
			dem++;
		}
};
class B {
	private:
		A var;
	public:
		// by default có 1 hàm tao cho A
		B() { 
			cout << " B_Constructor!\n";
		}
		~B() {
			cout << " B_Destructor!\n";
		}
};
int A::dem = 0;
int main() {
	B *a = new B;
//	B *b = new B;
//	B *c = new B;
	
//	A a;
//	A *a = new A;
//	A *b = new A;
//	A *c = new A;
	
	delete a;
//	delete b;
}
