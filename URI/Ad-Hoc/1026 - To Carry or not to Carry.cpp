#include <cstdio>
using namespace std;

long long int a, b;

int main () {

	while (scanf("%lld %lld", &a, &b) == 2) {
		printf("%lld\n", a xor b);
	}

	return 0;
	
}
