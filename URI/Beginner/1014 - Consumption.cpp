#include <iostream>
using namespace std;

int km;
float l;

int main () {

	cout.setf(ios_base::fixed);
	cout.precision(3);

	cin >> km >> l;
	cout << km/l << " km/l" << endl;

	return 0;

}
