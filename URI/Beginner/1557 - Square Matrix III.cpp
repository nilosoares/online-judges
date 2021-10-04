#include <cstdio>
#include <cmath>
using namespace std;

int n, iMax, jMax, t;

int main() {

	while (scanf("%d", &n), n) {
		iMax = 1 << (n-1);
		
		t = 1 + (int) log10((double) iMax * (1 << (n-1)));
		
		for (int i = 1; i <= iMax; i *= 2) {
			jMax = i * (1 << (n-1));
			
			int j = i;
			while (j < jMax) {
				printf("%*d ", t, j);
				j *= 2;
			}
			printf("%*d\n", t, j);
		}
		printf("\n");
	}

	return 0;
	
}
