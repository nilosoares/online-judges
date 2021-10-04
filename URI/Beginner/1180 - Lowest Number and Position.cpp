#include <cstdio>
using namespace std;

int n, x, lowestK, lowestV;

int main () {

	scanf("%d", &n);
	
	lowestK = -1;
	lowestV = 2147483647;
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		
		if (x < lowestV) {
			lowestV = x;
			lowestK = i;
		}
	}
	
	printf("Menor valor: %d\n", lowestV);
	printf("Posicao: %d\n", lowestK);

	return 0;
	
}
