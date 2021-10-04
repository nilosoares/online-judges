#include <cstdio>
using namespace std;

int n;

int main () {

	while (scanf("%d", &n), n) {
		printf("1");
		
		for (int i = 2; i <= n; i++) {
			printf(" %d", i);
		}
		
		printf("\n");
	}

	return 0;
	
}
