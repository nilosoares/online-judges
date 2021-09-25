#include <iostream>
#include <cstdlib>
using namespace std;

int t, n;

int main () {

	cin >> t;
	
	while (t--) {
		cin >> n;
		
		if (n == 0) {
			cout << "NULL" << endl;
		} else {
			cout << (abs(n) % 2 == 0 ? "EVEN" : "ODD") << " " << (n > 0 ? "POSITIVE" : "NEGATIVE") << endl;
		}
	}

	return 0;
	
}
