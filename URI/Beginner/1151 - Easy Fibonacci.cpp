#include <cstdio>
#define N 47
using namespace std;

int n;
long long int FIB[N];

void fillFib (int n) {
	FIB[0] = 0;
	FIB[1] = 1;
	for (int i = 2; i <= n; i++) {
		FIB[i] = FIB[i-1] + FIB[i-2];
	}
}

void printFib (int n) {
	printf("%lld", FIB[0]);
	for (int i = 1; i < n; i++) {
		printf(" %lld", FIB[i]);
	}
	printf("\n");
}

int main () {

	scanf("%d", &n);
	fillFib(n);
	printFib(n);

	return 0;
	
}
