#include <iostream>
using namespace std;

int a, b, c;

int main () {

	while (cin >> a >> b >> c) {
		if (a == b && c != a) {
			cout << "C" << endl;
		} else if (a == c && b != a) {
			cout << "B" << endl;
		} else if (b == c && a != b) {
			cout << "A" << endl;
		} else {
			cout << "*" << endl;
		}
	}
	
	return 0;
	
}
