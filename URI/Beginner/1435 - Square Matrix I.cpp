#include <cstdio>
#include <algorithm>
using namespace std;

int n;

int getCellValue(int i, int j) {
	return min(
		min(i, n-i+1),
		min(j, n-j+1)
	);
}

void printMatrix() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%3d", getCellValue(i, j));
			if (j < n) {
				printf(" ");
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
