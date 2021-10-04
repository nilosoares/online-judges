#include <iostream>
using namespace std;

int n, i1, i2;

int main () {

	while (cin >> n) {
		i1 = 1;
		i2 = n;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i2 == j && i1 == j) {
					cout << "2";
				} else if (i2 == j) {
					cout << "2";
				} else if (i1 == j) {
					cout << "1";
				} else {
					cout << "3";
				}
			}
			cout << endl;
			i1++;
			i2--;
		}
	}

	return 0;
	
}
