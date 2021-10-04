#include <cstdio>
using namespace std;

int n, v;

int main () {

	scanf("%d", &n);
	
	v = 0;
	for (int i = 0; i < 1000; i++) {
		printf("N[%d] = %d\n", i, v % n);
		v++;
	}

	return 0;
	
}
