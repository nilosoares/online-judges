#include <cstdio>
using namespace std;

int t, a, b;

int maxCommonDivisor(int a, int b) {
	return (b == 0) ? a : maxCommonDivisor(b, a % b);
}

int main () {
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", maxCommonDivisor(a, b));
	}

	return 0;
	
}
