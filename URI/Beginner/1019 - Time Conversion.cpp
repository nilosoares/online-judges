#include <iostream>
using namespace std;

int n, h, m, s;

int main () {

	cin >> n;
	
	h = n / 3600;
	n %= 3600;
	m = n / 60;
	n %= 60;
	s = n;
	
	cout << h << ":" << m << ":" << s << endl;

	return 0;
	
}
