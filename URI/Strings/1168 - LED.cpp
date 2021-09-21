#include <iostream>
#include <string>
#include <map>
using namespace std;

int t, sLength, totalLedsOn;
string s;
map<char, int> ledsOn;

int main () {

	ledsOn['0'] = 6;
	ledsOn['1'] = 2;
	ledsOn['2'] = 5;
	ledsOn['3'] = 5;
	ledsOn['4'] = 4;
	ledsOn['5'] = 5;
	ledsOn['6'] = 6;
	ledsOn['7'] = 3;
	ledsOn['8'] = 7;
	ledsOn['9'] = 6;

	cin >> t;
	while (t--) {
		cin >> s;
		
		totalLedsOn = 0;
		sLength = s.length();
		for (int i = 0; i < sLength; i++) {
			totalLedsOn += ledsOn[s[i]];
		}
		
		cout << totalLedsOn << " leds" << endl;
	}

	return 0;

}
