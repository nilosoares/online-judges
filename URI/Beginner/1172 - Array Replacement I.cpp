#include <cstdio>
using namespace std;

int n;

int main () {

	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		
		if (n <= 0) {
			n = 1;
		}
		
		printf("X[%d] = %d\n", i, n);
	}

	return 0;
	
}
