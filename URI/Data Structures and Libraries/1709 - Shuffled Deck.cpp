#include <iostream>
using namespace std;

int n, p, nbSwaps;

void swap() {
	if (p <= n/2) {
		p = p * 2;
	} else {
		p = ((p - ((n/2)+1)) * 2) + 1;
	}
}

int main () {
	
	cin >> n;
	
	p = 1;
	nbSwaps = 0;
	
	do {
		swap();
		nbSwaps++;
	} while (p != 1);
	
	cout << nbSwaps << endl;
	
	return 0;
	
}
