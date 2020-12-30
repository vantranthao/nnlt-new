#include <iostream>
#include <string>
using namespace std;
class Month {
    public:
        int month;
        Month() {
            month  = 1;
        }
        Month(int m) {
            month = m;
        }
        Month(string m) {
            if(m == "Jan") {
                month = 1;
            } else if(m == "Feb") {
                month = 2;
            } else if(m == "Mar") {
            	month = 3;
			} else if(m == "Apr") {
				month = 4;
			}  else if(m == "May") {
				month = 5;
			}  else if(m == "Jun") {
				month = 6;
			}  else if(m == "Jul") {
				month = 7;
			}  else if(m == "Aug") {
				month = 8;
			}  else if(m == "Sep") {
				month = 9;
			}  else if(m == "Oct") {
				month = 10;
			}  else if(m == "Nov") {
				month = 11;
			}  else if(m == "Dec") {
				month = 12;
			} 
        }
        void input(int m) {
            if(m >= 1 && m  <= 12) {
                month = m;
            } else {
                cout << "Input valid";
            }
 
        }
        void output() {
            switch(month) {
                case 1:
                 cout << "January";
                 break;
                case 2:
                 cout << "February";
                 break;
                case 3:
                 cout << "March";
                 break;
                case 4:
                 cout << "April";
                 break;
                case 5:
                 cout << "May";
                 break;
                case 6:
                 cout << "June";
                 break;
                case 7:
                 cout << "July";
                 break;
                case 8:
                 cout << "August";
                 break;
                case 9:
                 cout << "September";
                 break;
                case 10:
                 cout << "October";
                 break;
                case 11:
                 cout << "November";
                 break;
                case 12:
                 cout << "December";
                 break;
            }
        }
        void nextMonth() {
            if(month == 12) {
                month = 1;
            } else month++;
        }
 
};
 
int main()
{
  Month m1("Sep");
  Month m2(5);
  m1.output(); cout << endl;
  m2.output();
  m1.nextMonth();cout << endl;
  m1.output(); cout << endl;
}
