#include <iostream>
using namespace std;

int t, n;
long long int fibs[40], calls[40];

void fillFibonacci(int q) {
	fibs[0] = 0;
	fibs[1] = 1;
	calls[0] = calls[1] = 0;
	for (int i = 2; i <= 39; i++) {
		fibs[i] = fibs[i-1] + fibs[i-2];
		calls[i] = calls[i-1] + calls[i-2] + 2;
	}
}

int main () {

	fillFibonacci(40);

	cin >> t;
	
	while (t--) {
		cin >> n;
		cout << "fib(" << n << ") = " << calls[n] << " calls = " << fibs[n] << endl;
	}

	return 0;
	
}
