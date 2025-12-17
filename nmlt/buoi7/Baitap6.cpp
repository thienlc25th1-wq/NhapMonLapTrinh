#include <iostream>
using namespace std;
void cau11() {
	int Sotien;
	cout << "Nhap so tien: ";
	cin >> Sotien;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			for (int k = 0; k <= 100; k++) {
				if (i * 100000 + j * 200000 + k * 500000 == Sotien) {
					cout << i << "x100000 + " << "200000 +" << k << "x500000" << endl;
				}
	  }
		}
	}
}