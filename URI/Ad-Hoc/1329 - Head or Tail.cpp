#include <iostream>
using namespace std;

int n, c, m, j;

int main () {

	while (cin >> n, n) {
		m = j = 0;
		
		while (n--) {
			cin >> c;
			
			if (c == 0) {
				m++;
			} else {
				j++;
			}
		}
		
		cout << "Mary won " << m << " times and John won " << j << " times" << endl;
	}
	
	return 0;
	
}
