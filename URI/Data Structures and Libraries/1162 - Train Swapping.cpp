#include <cstdio>
#include <algorithm>
using namespace std;

int t, n, wagons[51], nbSwaps;

void swapWagons() {
	for (int i = 1; i < n; i++) {
		if (wagons[i] > wagons[i+1]) {
			nbSwaps++;
			swap(wagons[i], wagons[i+1]);
		}
	}
}

bool isMessy() {
	for (int i = 1; i <= n; i++) {
		if (wagons[i] != i) {
			return true;
		}
	}
	return false;
}

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			scanf("%d", &wagons[i]);
		}
		
		nbSwaps = 0;
		do {
			swapWagons();
		} while (isMessy());
		
		printf("Optimal train swapping takes %d swaps.\n", nbSwaps);
	}

	return 0;
	
}
