#include <iostream>
using namespace std;

int a, b, output;

int GCD(int a, int b) {
	return (b == 0) ? a : GCD(b, a % b);
}

int main () {
	
	while (cin >> a >> b) {
		output = (2 * (a + b)) / GCD(a, b);
		cout << output << endl;
	}

	return 0;
	
}
