#include <cstdio>
using namespace std;

long long int n;

int main () {

	scanf("%lld", &n);
	for (int i = 0; i < 10; i++) {
		printf("N[%d] = %lld\n", i, n);
		n *= 2;
	}

	return 0;
	
}
