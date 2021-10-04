#include <cstdio>
#define N 14
using namespace std;

int n;
long long int factorial[N];

void fillFactorial(int n) {
	factorial[0] = 1;
	for (int i = 1; i < 13; i++) {
		factorial[i] = factorial[i-1] * i;
	}
}

int main () {

	fillFactorial(n);
	
	scanf("%d", &n);
	
	printf("%lld\n", factorial[n]);

	return 0;
	
}
