#include <iostream>
using namespace std;

const int STACK_MAX = 10;

class Stack {
public:
	//yýðýný hazýrlar top deðiþkennine 0 atar
	Stack();
	//item deðerinini yýðýna ekler
	bool push(int item);
	//yýðyna son eklenen elemaný çýkararak,çýkarýlan elemaný döndürür
	int pop();
	//yýðýn boþ mu dolu mu kontrol eder
	bool ýsempty();
	//yýðyndan eleman çýkarmadan son eklenen eleman deðerinin döndürür
	int topret();
	//yýðýný yazdýrýr
	void writeall();
	//yýðýndaki tüm elemanlarý siler.top deðerinin sýfýrlar
	void deleteall();
	void top_yazdir();
	int top_get();
private:
	//yýðýnýn tutulduðu yer
	int D[STACK_MAX];
	//yýðýndaki son elemanýn bir üst indisini tutar
	int top;

};
Stack::Stack() {
	top = 0;
}
bool Stack::ýsempty() {
	if (top<=0) 
		return true;
	return false;
}
bool Stack::push(int item) {
	if (top >= STACK_MAX)
		return false;
	D[top] = item;
	top++;
	return true;
}
int Stack::pop() {
	if (top <= 0)
		return -1;
	top--;
	int item;
	item = D[top - 1];
	return item;
}
void Stack::deleteall() {
	top = 0;
	//alternatif olarak yýðýndaki tüm elemanlarý pop edebiliriz

}
void Stack::writeall() {
	//yýðýndan elemanlarý teket teker pop  ederek ekrana yazar
	while (topret() != -1)
		cout << pop();
}
void Stack::top_yazdir() {
	cout << "top degeri=" << top;
}
int Stack::top_get() {
	return top;
}
int main() {
	Stack s1;
	s1.push(5); s1.push(6); s1.push(7);
	s1.writeall();

}