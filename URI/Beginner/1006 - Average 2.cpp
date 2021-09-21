#include <iostream>
using namespace std;

float a, b, c, m;

int main () {

	cout.setf(ios_base::fixed);
	cout.precision(1);

	cin >> a >> b >> c;
	
	m = ((a*2.0)+(b*3.0)+(c*5.0)) / 10.0;
	
	cout << "MEDIA = " << m << endl;
	
	return 0;

}
