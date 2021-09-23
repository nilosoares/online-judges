#include <iostream>
#include <map>
using namespace std;

int n, sLength, command;
string s;

char getDirection() {
	switch (command) {
		case 0: return 'N';
		case 1: return 'L';
		case 2: return 'S';
		case 3: return 'O';
	}
	
	return '?';
}

int main () {

	while (cin >> n, n) {
		cin >> s;
		
		command = 0;
		sLength = s.length();
		
		for (int i = 0; i < sLength; i++) {
			if (s[i] == 'D') {
				command = (command + 1) % 4;
			} else {
				command = (command + 4 - 1) % 4;
			}
		}
		
		cout << getDirection() << endl;
	}

	return 0;
	
}
