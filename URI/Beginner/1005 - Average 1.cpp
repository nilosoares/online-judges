#include <iostream>
using namespace std;

float a, b, m;

int main () {

	cout.setf(ios_base::fixed);
	cout.precision(5);

	cin >> a >> b;
	
	m = ((a*3.5)+(b*7.5)) / 11.0;
	
	cout << "MEDIA = " << m << endl;
	
	return 0;

}
