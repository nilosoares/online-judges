#include <iostream>
using namespace std;

int p, q;
long long int FAC[21];

void fillFactorials(int q) {
	FAC[0] = 1;
	for (int i = 1; i <= q; i++) {
		FAC[i] = FAC[i-1] * i;
	}
}

int main () {

	fillFactorials(20);
	
	while (cin >> p >> q) {
		cout << FAC[p] + FAC[q] << endl;
	}

	return 0;
	
}
