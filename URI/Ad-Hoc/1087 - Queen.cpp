#include <iostream>
using namespace std;

int x1, y1, x2, y2;

int main () {

	while (true) {
		cin >> x1 >> y1 >> x2 >> y2;
		
		if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
			break;
		}
		
		if (x1 == x2 && y1 == y2) {
			// same point
			cout << 0 << endl;
		} else if ((x1 == x2) || (y1 == y2) || (y1-x1 == y2-x2) || (y1+x1 == y2+x2)) {
			// same line, column or diagonal
			cout << 1 << endl;
		} else {
			cout << 2 << endl;
		}
	}

	return 0;
	
}
