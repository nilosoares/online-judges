#include <cstdio>
#include <cstring>
#define N 20000
using namespace std;

int n, m, B[N+1], k, count;

int main () {
	
	while (scanf("%d %d", &n, &m), n && m) {
		memset(B, 0, sizeof B);
		
		count = 0;
		
		for (int i = 1; i <= m; i++) {
			scanf("%d", &k);
			
			if (++B[k] == 2) {
				count++;
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
	
}
