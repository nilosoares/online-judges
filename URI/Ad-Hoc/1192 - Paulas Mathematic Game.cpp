#include <iostream>
#include <stdlib.h>
using namespace std;

int t, a, b, output;
char s[4];

int main () {

	cin >> t;
	
	while (t--) {
		cin >> s;
		
		a = ((int) s[0]) - 48;
		b = ((int) s[2]) - 48;
		
		if (a == b) {
			output = a * b;
		} else if (((int) s[1]) < 97) {
			output = b - a;
		} else {
			output = a + b;
		}
		
		cout << output << endl;
	}
	
	return 0;
	
}
