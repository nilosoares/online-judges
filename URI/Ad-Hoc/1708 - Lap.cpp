#include <iostream>
#include <cmath>
using namespace std;

double a, b;
int output;

int main () {
	
	cin >> a >> b;
	output = ceil(b/(b-a));
	cout << output << endl;
		
	return 0;
	
}
