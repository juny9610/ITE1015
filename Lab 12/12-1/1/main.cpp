#include <iostream>
using namespace std;

template<typename T>
void myswap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int a, b;
	double c, d;
	string e, f;
	cin >> a >> b;
	myswap(a, b);
	cout << "After calling myswap(): " << a << " " << b << endl;
	
	cin >> c >> d;
	myswap(c, d);
	cout << "After calling myswap(): " << c << " " << d << endl;
	
	cin >> e >> f;
	myswap(e, f);
	cout << "After calling myswap(): " << e << " " << f << endl;

	return 0;
}