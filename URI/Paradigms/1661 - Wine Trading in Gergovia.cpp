#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> houses;
long long int cost;

void buy(int i) {
	int amount;
	int j = i+1;
	while (houses[i] != 0) {
		while (houses[j] >= 0) j++;
		amount = min(houses[i], -houses[j]);
		houses[i] -= amount;
		houses[j] += amount;
		cost += amount * abs(i-j);
	}
}

void sell(int i) {
	int amount;
	int j = i+1;
	while (houses[i] != 0) {
		while (houses[j] <= 0) j++;
		amount = min(-houses[i], houses[j]);
		houses[i] += amount;
		houses[j] -= amount;
		cost += amount * abs(i-j);
	}
}

int main () {

	while (true) {
		// input 1
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		
		// input 2
		houses.assign(n, 0);
		for (int i = 0; i < n; i++) {
			scanf("%d", &houses[i]);
		}
		
		// process
		cost = 0;
		for (int i = 0; i < n; i++) {
			if (houses[i] > 0) {
				buy(i);
			} else if (houses[i] < 0) {
				sell(i);
			}
		}
		
		// output
		printf("%lld\n", cost);
	}

	return 0;

}
