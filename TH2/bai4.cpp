#include <bits/stdc++.h>
using namespace std;
class SinhVien {
    public :
        string MSV;
        string HoTen;
        string lop;
        double Diem;
        SinhVien(string msv, string ht, string l, double diem) {
            MSV = msv;
            HoTen = ht;
            lop = l;
            Diem = diem;
        }
};
int main()
{
    vector<SinhVien> listStudents;
    cout << "1. Them moi sinh vien.\n";
	cout << "2. Xoa sinh vien khoi danh sach.\n";
	cout << "3. Tim kiem sinh vien theo ma sinh vien.\n";
	cout << "4. Liet ke danh sach sinh vien theo lop.\n";
	cout << "5. Liet ke danh sach tat ca sinh vien.\n";
	cout << "6. Liet ke danh sach sinh vien diem > 5.5.\n";
	cout << "7. Thoat";
    int orders = 0;
    string msv, hoTen, lop;
    double diem;
    bool stop = true;
    while(stop)
    {
        cout << "Please enter number 1-6 : \n";
        cin >> orders;
        switch(orders) {
            case 1: // them moi sv
                cin.ignore();
                getline(cin, msv);
                getline(cin, hoTen);
                getline(cin, lop);
				cin >> diem;
                listStudents.push_back(SinhVien(msv, hoTen, lop, diem));
                
                for(int i = 0; i < listStudents.size(); i++ ) {
                    cout << listStudents[i].MSV << "\t" << listStudents[i].HoTen << "\t" << listStudents[i].lop << "\t" << listStudents[i].Diem << endl;
                }
                break;
            case 2:
            	cin >> msv;
                for(int i = 0; i < listStudents.size(); i++ ) {
                    if(listStudents[i].MSV == msv) {
                        listStudents.erase(listStudents.begin() + i);
                    }
                }
                for(int i = 0; i < listStudents.size(); i++ ) {
                    cout << listStudents[i].MSV << "\t" << listStudents[i].HoTen << "\t" << listStudents[i].lop << "\t" << listStudents[i].Diem << endl;
                }
                break;
            	//listStudents.erase(SinhVien(msv, hoTen, lop));
            case 3:
            	cin >> msv;
                for(int i = 0; i < listStudents.size(); i++ ) {
                    if(listStudents[i].MSV == msv) {
                        cout << listStudents[i].HoTen << "\t" << listStudents[i].lop << endl;
                    }
                }
                break;
            case 4: // tim kiem theo lop
                cin >> lop;
                for(int i = 0; i < listStudents.size(); i++ ) {
                    if(listStudents[i].lop == lop) {
                        cout << listStudents[i].MSV << "\t" << listStudents[i].HoTen << endl;
                    }
                }
                break;
            case 5:
            	for(int i = 0; i < listStudents.size(); i++ ) {
                    cout << listStudents[i].MSV << "\t" << listStudents[i].HoTen << "\t" << listStudents[i].lop << endl;
                }
                break;
            case 6:
            	for(int i = 0; i < listStudents.size(); i++ ) {
                	if (listStudents[i].Diem > 5.5) {
                		cout << listStudents[i].MSV << "\t" << listStudents[i].HoTen << "\t" << listStudents[i].lop << endl;
					}
                }
                break;
            case 7:
                stop = false;
                break;
        }
 
    }
}
 
