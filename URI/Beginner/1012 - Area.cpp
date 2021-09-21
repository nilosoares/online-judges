#include <iostream>
#define PI 3.14159
using namespace std;

float a, b, c;

int main () {

	cout.setf(ios_base::fixed);
	cout.precision(3);

	cin >> a >> b >> c;
	
	cout << "TRIANGULO: " << a * c / 2.0 << endl;
	cout << "CIRCULO: " << PI * c * c << endl;
	cout << "TRAPEZIO: " << (a + b) * c / 2.0 << endl;
	cout << "QUADRADO: " << b * b << endl;
	cout << "RETANGULO: " << a * b << endl;

	return 0;
	
}
