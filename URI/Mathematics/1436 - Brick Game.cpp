#include <cstdio>
#define N_MAX 12
using namespace std;

int t, n, players[N_MAX];

int main () {
	
	scanf("%d", &t);
	
	for (int test = 1; test <= t; test++) {
		scanf("%d", &n);
		
		for (int i = 1; i <= n; i++) {
			scanf("%d", &players[i]);
		}
		
		printf("Case %d: %d\n", test, players[(n/2)+1]);
	}
	
	return 0;
	
}
