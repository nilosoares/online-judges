#include <iostream>
#include <string>
using namespace std;

int t;
string s;

bool isOne() {
	int c1 = (int) (s[0] == 'o');
	int c2 = (int) (s[1] == 'n');
	int c3 = (int) (s[2] == 'e');
	
	return (c1+c2+c3 >= 2);
}

bool isTwo() {
	int c1 = (int) (s[0] == 't');
	int c2 = (int) (s[1] == 'w');
	int c3 = (int) (s[2] == 'o');
	
	return (c1+c2+c3 >= 2);
}

int main () {

	cin >> t;
	while (t--) {
		cin >> s;
		
		if (isOne()) {
			cout << "1" << endl;
		} else if (isTwo()) {
			cout << "2" << endl;
		} else {
			cout << "3" << endl;
		}
	}

	return 0;

}
