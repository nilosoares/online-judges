#include <iostream>
#include <string>
using namespace std;

int t, f;
string name;

int main () {
	
	cin >> t;
	
	while (t--) {
		cin >> name >> f;
		
		cout << (name == "Thor" ? "Y" : "N") << endl;
	}
	
	return 0;
	
}
