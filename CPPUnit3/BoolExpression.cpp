#include "iostream"

using std::cin;
using std::cout;
using std::endl;

void tureFalseTest();
void boolTypeTest();


typedef unsigned int UInt;
typedef unsigned int* PInt;

#define A_NAME "asahi" 
#define YOU 2


int main() {
	tureFalseTest();
	cout << endl;
	boolTypeTest();
	return 0;
}

void tureFalseTest() {
	int a = 0, b = 1;
	cout << (3 == a) << endl;
	cout << (b < a) << endl;
	cout << (3.2 > b) << endl;
	cout << (a&&b) << endl;
	cout << (b || 18) << endl;
	cout << (!a) << endl;

}

void boolTypeTest() {
	bool isMyBook; //all using "is" to start
	bool isRunning;
	bool isBoy();

	bool hasLicence(); //sometimes can using other words
	bool canWork();
	bool shouldSort();

	//bool and int 
	cout << false << endl;
	cout << true << endl;
	
}