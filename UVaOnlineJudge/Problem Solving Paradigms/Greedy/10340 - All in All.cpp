#include <iostream>
using namespace std;

string a, b;

bool isSubSequence() {
	unsigned int i = 0;
	unsigned int j = 0;
	bool match;
	
	while (i < a.length()) {
		match = false;
		
		while (j < b.length()) {
			if (a[i] == b[j++]) {
				match = true;
				break;
			}
		}
		
		if (match == false) {
			return false;
		}
		
		i++;
	}
	
	return true;
}

int main () {
	
	while (cin >> a >> b) {
		cout << (isSubSequence() ? "Yes" : "No") << endl;
	}
	
	return 0;
	
}
