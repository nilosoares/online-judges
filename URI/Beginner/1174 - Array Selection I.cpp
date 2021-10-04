#include <iostream>
using namespace std;

float A[101];

int main () {

	for (int i = 0; i < 100; i++) {
		cin >> A[i];
		if (A[i] <= 10) {
			cout << "A[" << i << "] = " << A[i] << endl;
		}
	}

	return 0;
	
}
