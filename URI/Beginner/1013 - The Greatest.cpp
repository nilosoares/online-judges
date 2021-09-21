#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c, maior;

int main () {

	cin >> a >> b >> c;
	maior = max(a, max(b, c));
	cout << maior << " eh o maior" << endl;

	return 0;
	
}
