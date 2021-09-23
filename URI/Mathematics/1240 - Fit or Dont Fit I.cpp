#include <iostream>
#include <cstring>
using namespace std;

int t, aLength, bLength;
string a, b;

bool fits () {
	int aLength = a.length();
	int bLength = b.length();
	
	if (bLength > aLength) {
		return false;
	}
	
	int i = aLength-1;
	int j = bLength-1;
	
	while (j >= 0) {
		if (a[i] != b[j]) {
			return false;
		}
		i--;
		j--;
	}
	
	return true;
}

int main () {

	cin >> t;
	
	while (t--) {
		cin >> a >> b;
		cout << (fits() ? "encaixa" : "nao encaixa") << endl;
	}

	return 0;
	
}
