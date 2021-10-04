#include <cstdio>
using namespace std;

int t, n;
long long int sum = 0;

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		
		sum = 0;
		for (int i = 1; i <= n/2; i++) {
			if (n % i == 0) {
				sum += i;
			}
		}
		
		if (sum == n) {
			printf("%d eh perfeito\n", n);
		} else {
			printf("%d nao eh perfeito\n", n);
		}
	}

	return 0;
	
}
