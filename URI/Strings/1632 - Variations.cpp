#include <iostream>
using namespace std;

string s;
int t, sLength;
long long int total;

int nbOfVariations(char c) {
	switch (c) {
		case 'a': return 3;
		case 'e': return 3;
		case 'i': return 3;
		case 'o': return 3;
		case 's': return 3;
		case 'A': return 3;
		case 'E': return 3;
		case 'I': return 3;
		case 'O': return 3;
		case 'S': return 3;
	}
	return 2;
}

int main () {

	cin >> t;
	
	while (t--) {
		cin >> s;
		
		total = 1;
		sLength = s.length();
		for (int i = 0; i < sLength; i++) {
			total *= nbOfVariations(s[i]);
		}
		
		cout << total << endl;
	}

	return 0;
	
}
