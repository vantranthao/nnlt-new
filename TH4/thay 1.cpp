#include <iostream>
using namespace std;
class HoaDon{
private:
int soLuong;
double giaCa;
public:
HoaDon(){
soLuong=1; giaCa=10;
}
HoaDon(int sl, double gc){
soLuong=sl; giaCa=gc;
}
double tongTien();
void setGiaCa(double giaMoi);
void inHoaDon();

};
class HoaDonKM :public HoaDon
{
private:
double giamGia;
public:
HoaDonKM():HoaDon(){
giamGia=2;
}
HoaDonKM(int sl, double gc, double gg):HoaDon(sl,gc){
giamGia=gg;
}
double thanhToan();
void inHoaDon();

};
double HoaDon::tongTien(){

return soLuong*giaCa;
}
void HoaDon::setGiaCa(double giaMoi){
giaCa=giaMoi;
}
void HoaDon::inHoaDon(){
cout<<"--------------------------------------------"<<endl;
cout<<"Hoa don cua san pham hien co!"<<endl;
cout<<"So san pham la "<<soLuong<<endl;
cout<<"Gia san pham la "<<giaCa<<endl;
cout<<"Tong tien la "<<tongTien()<<endl;
}
double HoaDonKM::thanhToan(){
return tongTien()-giamGia;
}
void HoaDonKM::inHoaDon(){
HoaDon::inHoaDon();
cout<<"So tien duoc giam la "<<giamGia<<endl;
cout<<"So tien phai thanh toan la "<<thanhToan()<<endl;
}
int main()
{
HoaDon d;
d.inHoaDon();
HoaDon d1(5,3);
d1.inHoaDon();
HoaDonKM km;
km.inHoaDon();
HoaDonKM km1(3,5,2);
km1.inHoaDon();
return 0;
}
