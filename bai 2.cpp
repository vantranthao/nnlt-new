#include<iostream>

using namespace std;

class CPU{
	double tocDo;
	public:
		CPU(double s): tocDo(s){
		}
		virtual double sucManh(){
			return tocDo;
		}
		double getTocDo(){
			return tocDo;
		}
		void xepHang(){
			if(sucManh() > 3){
				cout << "Chip nay rat manh ! \n";
			}
		}
}; 

class Core2Dual: public CPU{
	public:
		Core2Dual(double s): CPU(s){
		}
		double sucManh(){
			return 2*getTocDo();
		}
};                         

int main(){
	Core2Dual aChip(2);
	aChip.xepHang();
}
