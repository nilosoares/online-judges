#include <iostream>
#include <string>
using namespace std;

string number;

int chartoInt(char c) {
	switch (c) {
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		case '0': return 0;
	}
	return 0;
}

bool isMultipleOf11(string n) {	
	int i;
	int nLength = n.length();
	
	int s1 = 0;
	for (i = 0; i < nLength; i += 2) {
		s1 += chartoInt(n[i]);
	}
	
	int s2 = 0;
	for (i = 1; i < nLength; i += 2) {
		s2 += chartoInt(n[i]);
	}
	
	return (s1 % 11 == s2 % 11);
}

int main () {
	
	while (true) {
		// input
		cin >> number;
		if (number == "0") {
			break;
		}
		
		// output
		if (isMultipleOf11(number)) {
			cout << number << " is a multiple of 11." << endl;
		} else {
			cout << number << " is not a multiple of 11." << endl;
		}
	}
	
}
