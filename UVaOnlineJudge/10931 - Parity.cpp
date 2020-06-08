#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string nBinary;
int parity;

void findBinaryAndParity(int q) {
	// reset and init variables
	parity = 0;
	nBinary = "";
	int mod = 0;
	
	while (q > 0) {
		mod = q % 2;
		
		parity += mod;
		
		nBinary += (mod == 0) ? "0" : "1";
		
		q = q / 2;
	}
	
	reverse(nBinary.begin(), nBinary.end());
}

int main () {
	
	while (true) {
		cin >> n;
		
		if (n == 0) {
			break;
		}
		
		findBinaryAndParity(n);
		
		cout << "The parity of " << nBinary << " is " << parity << " (mod 2)." << endl;
	}
	
	return 0;
	
}
