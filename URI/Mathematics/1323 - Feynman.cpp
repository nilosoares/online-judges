#include <cstdio>
#define N 101
using namespace std;

int n;
long long int Q[N];

void numberOfSquares(int n) {
	Q[0] = 0;
	for (int i = 1; i <= n; i++) {
		Q[i] = (i*i) + Q[i-1];
	}
}

int main () {
	
	numberOfSquares(N);
	
	while (scanf("%d", &n), n) {
		printf("%lld\n", Q[n]);
	}
	
	return 0;
	
}
