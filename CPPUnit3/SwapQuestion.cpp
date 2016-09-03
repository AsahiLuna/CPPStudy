#include "iostream"
using std::cin;
using std::cout;
using std::endl;
int swapInt(int* a, int* b, int* c);
int swapInt(int& a, int& b, int& c);
/*
int main() {
	int a(0), b(0), c(0);
	int max;
	cin >> a >> b >> c;
	max = swapInt(&a, &b, &c);
	max = swapInt(a, b, c);
	cout << max << " " << a << " " << b << " " << c;
	return 0;
}
*/
int swapInt(int* a, int* b, int* c) {
	
	int temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
	return *a > *b ? *a > *c ? *a : *c : *b > *c ? *b : *c;


}
int swapInt(int& a, int& b, int& c) {
	int temp = *&a;
	*&a = *&c;
	*&c = *&b;
	*&b = temp;
	return *&a > *&b ? *&a > *&c ? *&a : *&c : *&b > *&c ? *&b : *&c;
}