#include <cstdio>
using namespace std;

int n, v, r;

int main () {
	
	r = 0;
	
	scanf("%d", &n);
	
	while (n--) {
		scanf("%d", &v);
		r += (v == 1) ? 1 : -1;
	}
	
	if (r >= 0) {
		printf("N\n");
	} else {
		printf("Y\n");
	}
	
	return 0;
	
}
