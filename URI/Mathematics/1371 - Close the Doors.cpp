#include <iostream>
using namespace std;

int n;

int main () {

	while (cin >> n, n) {
		cout << "1";
		for (int i = 2; i*i <= n; i++) {
			cout << " " << i*i;
		}
		cout << endl;
	}

	return 0;
	
}
