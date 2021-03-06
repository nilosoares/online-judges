#include <cstdio>
#include <cstring>
#define N_MAX 30001
#define NB_OF_COINS 5
using namespace std;

int n;
long long int ways[N_MAX];
int coins[NB_OF_COINS];

void fillCoins() {
	coins[0] = 1;
	coins[1] = 5;
	coins[2] = 10;
	coins[3] = 25;
	coins[4] = 50;
}

void fillWays(int q) {
	memset(ways, 0, sizeof(ways));
	
	ways[0] = 1;
	
	for (int i = 0; i < NB_OF_COINS; i++) {
		for (int j = 1; j <= q; j++) {
			if (coins[i] <= j) {
				ways[j] = ways[j - coins[i]] + ways[j];
			}
		}
	}
}

int main () {
	
	fillCoins();
	fillWays(N_MAX);
	
	while (scanf("%d", &n) == 1) {
		if (n >= 5) {
			printf("There are %lld ways to produce %d cents change.\n", ways[n], n);
		} else {
			printf("There is only 1 way to produce %d cents change.\n", n);
		}
	}
	
	return 0;
	
}
