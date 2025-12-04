#include <iostream>
using namespace std;
void cau1() {
	int a, b, c;
	cout << " Nhap a,b,c: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		cout << a;
	if (b > a && b > c)
		cout << b;
	if (c > a && c > b)
		cout << c;
 }
void cau2() {
	float a, b;
	cout << " Nhap a,b: ";
	cin >> a >> b;
	if (a * b > 0)
		cout << "cung dau";
	else
		cout << "Khac dau";
}
void cau3() {
	int a, b;
	cout << " nhap a,b: ";
	cin >> a >> b;
	if (a == 0) {
		if (b == 0)
			cout << " phuong trinh vo so nghiem" << endl;
		else
			cout << " phuong trinh vo nghiem" << endl;

	}
	else {
		cout << " nghiem la: " << (-b * 1.0 / a) << endl;
	}
}
void cau4() {
	int thang;
	cout << "nhap thang: ";
	cin >> thang;
	 if (thang <= 3) {
		cout << " Quy 1";
	}
	else if (thang <= 6) {
		cout << "quy 2";
	}
	else if ( thang <= 9){

		cout << " quy 3";
	}
	else {
		cout << " quy 4";
	}
}
int main()
{
	cau4();
}


