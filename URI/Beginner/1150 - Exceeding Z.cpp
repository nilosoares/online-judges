#include <cstdio>
using namespace std;

int x, n, sum, count;

int main () {

	scanf("%d", &x);
	while (scanf("%d", &n), n <= x);
	
	sum = x;
	for (count = 1; sum <= n; count++) {
		sum += ++x;
	}
	
	printf("%d\n", count);

	return 0;
	
}
