#include <iostream>
using namespace std;

int t, n;
long long int FIB[61];

void fillFib() {
	FIB[0] = 0;
	FIB[1] = 1;
	for (int i = 2; i <= 60; i++) {
		FIB[i] = FIB[i-1] + FIB[i-2];
	}
}

int main () {

	fillFib();

	cin >> t;
	
	while (t--) {
		cin >> n;
		cout << "Fib(" << n << ") = " << FIB[n] << endl;
	}

	return 0;
	
}
