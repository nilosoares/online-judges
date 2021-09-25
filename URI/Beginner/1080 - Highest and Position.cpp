#include <cstdio>
using namespace std;

int n, gk, gv;

int main () {

	gv = -1;
	
	for (int i = 1; i <= 100; i++) {
		scanf("%d", &n);
		
		if (n > gv) {
			gv = n;
			gk = i;
		}
	}
	
	printf("%d\n%d\n", gv, gk);

	return 0;
	
}
