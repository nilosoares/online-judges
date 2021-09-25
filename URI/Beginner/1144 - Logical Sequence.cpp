#include <cstdio>
#include <algorithm>
using namespace std;

int n;
long long int square = 1, cube = 1;

int main () {

	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		square = i * i;
		cube = square * i;
		
		printf("%d %lld %lld\n", i, square, cube);
		printf("%d %lld %lld\n", i, square+1, cube+1);
	}

	return 0;
	
}
