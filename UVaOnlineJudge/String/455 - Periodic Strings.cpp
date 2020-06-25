#include <iostream>
#include <string>
using namespace std;

int t;
string s;

int getSmallestPeriod()
{
	int sLength = s.length();
	int smallestPeriod = sLength;
		
	for (int p = 1; p <= sLength/2; p++) {
		if (sLength % p != 0) {
			continue;
		}
		
		bool isValid = true;
		for (int i = 0; i < sLength-p; i++) {
			if (s[i] != s[i+p]) {
				isValid = false;
				break;
			}
		}
		
		if (isValid) {
			smallestPeriod = p;
			break;
		}
	}
	
	return smallestPeriod;
}

int main ()
{

	cin >> t;
	
	while (t--) {
		getline(cin, s); // blank line
		cin >> s;
		
		cout << getSmallestPeriod() << endl;
		if (t > 0) {
			cout << endl;
		}
	}

	return 0;

}