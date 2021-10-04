#include <cstdio>
using namespace std;

int n;

int main () {

	scanf("%d", &n);
	
	printf("1\n");
	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
		}
	}
	printf("%d\n", n);

	return 0;
	
}
