#include <iostream>
using namespace std;

int n, a, b, og, child;

int main () {

	while (cin >> n, n) {
		og = child = 0;
		
		while (n--) {
			cin >> a >> b;
			
			if (a > b) {
				og++;
			} else if (a < b) {
				child++;
			}
		}
		
		cout << og << " " << child << endl;
	}

	return 0;
	
}
