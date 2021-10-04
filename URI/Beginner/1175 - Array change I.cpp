#include <cstdio>
#include <algorithm>
#define N 20
using namespace std;

int v[N+1];

void swaps() {
	int i = 1, j = 20;
	
	while (i <= j) {
		swap(v[i], v[j]);
		i++;
		j--;
	}
}

int main () {

	for (int i = 1; i <= N; i++) {
		scanf("%d", &v[i]);
	}
	
	swaps();
	
	for (int i = 1; i <= N; i++) {
		printf("N[%d] = %d\n", i-1, v[i]);
	}

	return 0;
	
}
