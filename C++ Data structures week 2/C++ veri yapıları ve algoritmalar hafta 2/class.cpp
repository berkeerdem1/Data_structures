#include<iostream>
using namespace std;
class basitnesne {
	private:
		int veri;//s�n�f verisi
	public:
		void deger_ata(int d) {//de�er atamak i�in �ye fonk

			veri = d;
		}
		void goster() {//veriyi g�r�nt�leyen fonk
			cout << "deger=" << veri << endl;
		}
};
int main() {
	basitnesne b1, b2;//basitnesne s�n�f�ndan ikiobje tan�mla
	b1.deger_ata(10466);//deger atamak i�in �ye fonk �a��rma
	b2.deger_ata(23467);
	b1.goster();//veriyi g�stermek i�in �ye fonk �a��r
	b2.goster();
}