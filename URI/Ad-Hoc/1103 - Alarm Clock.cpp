#include <iostream>
#include <stdlib.h>
using namespace std;

int h1, m1, h2, m2;

int calcMinutes() {
	int diff1, diff2;
	
	if (h2 > h1 || (h2 == h1 && m2 >= m1)) {
		// minutes since 00:00
		diff1 = (h1*60) + m1;
		diff2 = (h2*60) + m2;
		
		return diff2 - diff1;
		
	} else {
		// minutes until 00:00
		diff1 = ((23-h1)*60) + (60-m1);
		
		// minutos since 00:00
		diff2 = (h2*60) + m2;
		
		return diff1 + diff2;
	}
}

int main () {

	while (true) {
		cin >> h1 >> m1 >> h2 >> m2;
		
		if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
			break;
		}
		
		cout << calcMinutes() << endl;
	}

	return 0;
	
}
