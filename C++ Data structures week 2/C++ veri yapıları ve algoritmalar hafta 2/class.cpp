#include<iostream>
using namespace std;
class basitnesne {
	private:
		int veri;//sýnýf verisi
	public:
		void deger_ata(int d) {//deðer atamak için üye fonk

			veri = d;
		}
		void goster() {//veriyi görüntüleyen fonk
			cout << "deger=" << veri << endl;
		}
};
int main() {
	basitnesne b1, b2;//basitnesne sýnýfýndan ikiobje tanýmla
	b1.deger_ata(10466);//deger atamak için üye fonk çaðýrma
	b2.deger_ata(23467);
	b1.goster();//veriyi göstermek için üye fonk çaðýr
	b2.goster();
}