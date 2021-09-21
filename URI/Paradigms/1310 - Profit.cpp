#include <cstdio>
#include <vector>
#include <algorithm>
#define INF 1000000000
using namespace std;

typedef vector<int> vi;

int n, c, profit;
vi days, memo;

int main () {
	
	while (scanf("%d", &n) == 1) {
		scanf("%d", &c);
		
		days.resize(n+1);
		memo.assign(n+1, 0);
		
		for (int i = 1; i <= n; i++) {
			scanf("%d", &days[i]);
			memo[i] = days[i] - c + memo[i-1];
		}
		
		profit = -INF;
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				profit = max(profit, memo[j] - memo[j-i]);
			}
		}
		
		printf("%d\n", (profit > 0) ? profit : 0);
	}
	
	return 0;
	
}
