#include <cstdio>
using namespace std;

double n;

int main () {

	scanf("%lf", &n);
	
	for (int i = 0; i < 100; i++) {
		printf("N[%d] = %.4lf\n", i, n);
		n /= 2.0;
	}

	return 0;
	
}
