
#include <iostream>
using namespace std;
void cau1() {
	const float PI = 3.14;
	//Viet phuong trinh dien tich va chu vi hinh tron voi ban kinh r
	int r;
	cout << "nhap ban kinh r:";
	cin >> r;
	cout << " dien tich:" << PI * r *r<< endl;
		cout << "chu vi:" << 2 * PI * r << endl;
}
void cau2() {
	int luong, phucap;
	cout << " nhap luong: ";
	cin >> luong;
	cout << "Nhan phu cap :";
	cin >> phucap;
	cout << "Thuc lanh:" << (luong + phucap) * 0.9 << endl;
}
void cau3() {
	float chieucao, cannang;
	cout << " nhap chieu cao ( m): ";
	cin >> chieucao;
	cout << "Nhap can nang ( kg): ";
	cin >> cannang;
	cout << "BMI:" << cannang / (chieucao * chieucao) << endl;
}

int main()
{
	cau3();
	return 0;
}