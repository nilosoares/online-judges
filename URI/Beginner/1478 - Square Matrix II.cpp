#include <cstdio>
using namespace std;

int n;

void printMatrix() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j < i) {
				printf("%3d ", i-j+1);
			}
			else {
				printf("%3d", j-i+1);
				if (j < n) {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	printf("\n");
}

int main () {

	while (scanf("%d", &n), n) {
		printMatrix();
	}

	return 0;
	
}
