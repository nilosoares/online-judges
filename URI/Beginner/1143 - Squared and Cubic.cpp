#include <cstdio>
using namespace std;

int n;
long long int square = 1, cube = 1;

int main () {

	scanf("%d", &n);
	
	printf("1 1 1\n");
	
	for (int i = 2; i <= n; i++) {
		square = i * i;
		cube = square * i;
		
		printf("%d %lld %lld\n", i, square, cube);
	}

	return 0;
	
}
