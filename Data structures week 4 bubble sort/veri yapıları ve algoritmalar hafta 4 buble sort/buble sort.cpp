
#include <iostream>
using namespace std;


int sayilar, uzunluk;
void bublesort(int* sayilar, int uzunluk) {
	for (int i = 0;i < uzunluk;i++) {
		for (int j = 0;j < uzunluk;j++) {
			if (sayilar[j - 1] > sayilar[j]) {

				int tmp = sayilar[j - 1];
				sayilar[j - 1] = sayilar[j];
				sayilar[j] = tmp;


			}

		}
	}
}