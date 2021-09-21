#include <iostream>
using namespace std;

int a, b, c, d;
bool cond1, cond2, cond3, cond4, cond5;

int main () {
	
	cin >> a >> b >> c >> d;

	cond1 = b > c;
	cond2 = d > a;
	cond3 = (c+d) > (a+b);
	cond4 = (c > 0) && (d > 0);
	cond5 = (a%2 == 0);
	
	if (cond1 && cond2 && cond3 && cond4 && cond5) {
		cout << "Valores aceitos" << endl;
	}
	else {
		cout << "Valores nao aceitos" << endl;
	}

	return 0;
	
}
