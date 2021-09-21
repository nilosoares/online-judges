#include <iostream>
using namespace std;

int h, kmh, d;
float l;

int main () {

	cout.setf(ios_base::fixed);
	cout.precision(3);

	cin >> h >> kmh;
	d = h * kmh;
	l = d / 12.0;
	cout << l << endl;

	return 0;

}
