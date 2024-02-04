#include<iostream>
using namespace std;
void main() {
	int a[10] = { 2,5,7,9,12,15,34,76,87,123 };
	int aranan;
	int eb = 10;
	int ek = -1;
	int bayrak = 0;
	cout << "aranan degeri girin";
	cin >> aranan;
	while (eb - ek > 1) {
		int bakilan = (eb + ek) / 2;
		if (a[bakilan] == aranan) {
			bayrak = 1;
			cout << "aradiginiz sonuc:" << bakilan + 1 << ".indiste bulundu" << "\n";
			break;
		}
		else if (a[bakilan] < aranan) {
			ek = bakilan;
		}
		else {
			eb = bakilan;
		}
	}

if (bayrak == 0) {
	cout << "sayi bulunamadi\n";
	}
system("pause");

}