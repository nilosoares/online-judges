#include <iostream>
using namespace std;

int n, a, m, d;

int main () {
	
	cin >> n;
	
	cout << n/365 << " ano(s)" << endl;
	
	n %= 365;
	
	cout << n/30 << " mes(es)" << endl;
	
	n %= 30;
	
	cout << n << " dia(s)" << endl;

	return 0;
	
}
