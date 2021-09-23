#include <iostream>
using namespace std;

int n, _hex, blacks;
char letter, letters[6] = {'Z', 'A', 'B', 'C', 'D', 'E'};

int main () {

	while (cin >> n, n) {
		while (n--) {
			blacks = 0;
			
			for (int i = 1; i <= 5; i++) {
				cin >> _hex;
				
				if (_hex <= 127) {
					letter = letters[i];
					blacks++;
				}
			}
			
			if (blacks == 1) {
				cout << letter << endl;
			} else {
				cout << "*" << endl;
			}
		}
	}

	return 0;
	
}
