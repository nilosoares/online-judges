#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

float a, b, c, delta, r;

int main () {

	cout.setf(ios_base::fixed);
	cout.precision(5);
	
	cin >> a >> b >> c;
	
	delta = (b*b) - (4*a*c);
	if (a == 0.00 || a == -0.00 || delta < 0.00) {
		cout << "Impossivel calcular" << endl;
	}
	else {
		r = (-b + sqrt(delta)) / (2 * a);
		cout << "R1 = " << r << endl;
		
		r = (-b - sqrt(delta)) / (2 * a);
		cout << "R2 = " << r << endl;
	}

	return 0;
	
}
