#include <iostream>
using namespace std;

int n;
int counter;
int cashNotes[7] = {100, 50, 20, 10, 5, 2, 1};

int main () {

	cin >> n;
	
	cout << n << endl;
	for (int i = 0; i < 7; i++) {
		counter = 0;
		while (n - cashNotes[i] >= 0) {
			n -= cashNotes[i];
			counter++;
		}
		cout << counter << " nota(s) de R$ " << cashNotes[i] << ",00" << endl;
	}

	return 0;
	
}
