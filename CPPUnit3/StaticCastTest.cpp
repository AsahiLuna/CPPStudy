#include "iostream"
#include "iomanip"
using std::cin;
using std::cout;
using std::endl;

int main() {
	int a;
	double b;
	cin >> a >> b;
	int x = static_cast<int>(b);
	double y = static_cast<double>(a) / b;
	int r = static_cast<int>(b);
	if (b==r)
	{
		r -= 1;
	}
	double t = static_cast<double>(r);
	double z = static_cast<double>(a) / t;
		       

	cout << x << " " << std::setprecision(3) << 
		                std::fixed << y << " " << z << endl;
	cout << r << endl;
	return 0;
}