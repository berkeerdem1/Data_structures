#include<iostream>
using namespace std;

class dugum{
public:
	dugum()
	{
		psonraki = NULL;
	}
	int veri;
	dugum* psonraki;
};
int main() {
	dugum* p1= new dugum();
	dugum* p2= new dugum();
	dugum* p3= new dugum();
	dugum* p4= new dugum(); 
	dugum* p5= new dugum();

	p1->veri = 1;
	p2->veri = 4;
	p3->veri = 3;
	p4->veri = 5;
	p5->veri = 7;

	p1->psonraki = p3;
	p3->psonraki = p2;
	p2->psonraki = p4;
	p4->psonraki = p5;

	dugum* pTemp = p1;

	while (pTemp!= NULL) {
		cout << pTemp->veri;
		pTemp = pTemp->psonraki;
	}
}