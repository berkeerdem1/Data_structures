#include <iostream>
using namespace std;

const int STACK_MAX = 10;

class Stack {
public:
	//y���n� haz�rlar top de�i�kennine 0 atar
	Stack();
	//item de�erinini y���na ekler
	bool push(int item);
	//y��yna son eklenen eleman� ��kararak,��kar�lan eleman� d�nd�r�r
	int pop();
	//y���n bo� mu dolu mu kontrol eder
	bool �sempty();
	//y��yndan eleman ��karmadan son eklenen eleman de�erinin d�nd�r�r
	int topret();
	//y���n� yazd�r�r
	void writeall();
	//y���ndaki t�m elemanlar� siler.top de�erinin s�f�rlar
	void deleteall();
	void top_yazdir();
	int top_get();
private:
	//y���n�n tutuldu�u yer
	int D[STACK_MAX];
	//y���ndaki son eleman�n bir �st indisini tutar
	int top;

};
Stack::Stack() {
	top = 0;
}
bool Stack::�sempty() {
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
	//alternatif olarak y���ndaki t�m elemanlar� pop edebiliriz

}
void Stack::writeall() {
	//y���ndan elemanlar� teket teker pop  ederek ekrana yazar
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