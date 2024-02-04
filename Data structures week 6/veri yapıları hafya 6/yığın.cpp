#include<iostream>
using namespace std;

const int KUYRUK_MAX = 10;
class dogrusalkuyruk {

public:
	dogrusalkuyruk();
	bool ekle(int item);
	int cikar();
	bool bosmu();
	void yazdir();
private:
	int D[KUYRUK_MAX];
	int KS, KB;
};
dogrusalkuyruk::dogrusalkuyruk() {
	KS = -1;
	KB = -1;
}
bool dogrusalkuyruk::bosmu() {
	if (KS == -1 && KB == 1) {
		return true;
	}
	return false;
}
bool dogrusalkuyruk::ekle(int item) {
	if (KS >= KUYRUK_MAX)//kuyruk full ise
		return false;
	//kuyruk baþý sadece kuyruðða ilk giren eleman sonrasý iþlem görür
	//onunu haricinde kuyruk baþý hep 0.indisi tutar
}
int dogrusalkuyruk::cikar() {
	//kuyruk boþ mu
	if (bosmu())
		return -1;
	int item = D[KB];
	KS--;
	for (int i = 0; i <= KS; i++) {
		D[i] = D[i + 1];
		return item;
	}
}
void dogrusalkuyruk::yazdir() {
	if (bosmu())
		cout << "kuyruk bos";
	for (int i = KB; i <= KS; i++) {
		cout << D[i] << "";
	cout << endl;
	}
}


int main() {
	dogrusalkuyruk do1;
	for (int i = 0; i < KUYRUK_MAX; i++) 
		do1.ekle(i);// 0 1 2 3 4 5 6 7 8 9
	do1.yazdir();// 0 1 2 3 4 5 6 7 8 9

	for (int i = 0; i < 5; i++) 
		do1.cikar();
	// 5 6 7 8 9
	do1.yazdir();// 5 6 7 8 9

	do1.ekle(11);// 5 6 7 8 9 11
	do1.yazdir();// 5 6 7 8 9 11
	
	
}

