#include <cstdio>
#include <cstdlib>
using namespace std;

long long int a, b;

int main () {

	while (scanf("%lld %lld", &a, &b) == 2) {
		printf("%lld\n", abs(b-a));
	}

	return 0;
	
}
