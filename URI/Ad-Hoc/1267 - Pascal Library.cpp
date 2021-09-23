#include <cstdio>
#include <cstring>
#define N 100
using namespace std;

int n, d, A[N+1], x, greater;

int main () {

	while (scanf("%d %d", &n, &d), n && d) {
		greater = -1;
		memset(A, 0, sizeof A);
		
		for (int i = 1; i <= d; i++) {
			for (int j = 1; j <= n; j++) {
				scanf("%d", &x);
				
				A[j] += x;
				
				if (A[j] > greater) {
					greater = A[j];
				}
			}
		}
		
		if (greater == d) {
			printf("yes\n");
		} else {
			printf("no\n");	
		}
	}

	return 0;
	
}
