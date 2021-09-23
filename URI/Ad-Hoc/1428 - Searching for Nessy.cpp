#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

double n, m;
int t, s;

int main () {

	cin >> t;
	
	while (t--) {
		cin >> n >> m;
		
		s = ceil((n-2) / 3.0) * ceil((m-2) / 3.0);
		s = max(1, s);
		
		cout << s << endl;
	}
	
	return 0;

}
