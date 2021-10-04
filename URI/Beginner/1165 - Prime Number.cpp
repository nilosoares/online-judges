#include <cstdio>
#include <cmath>
using namespace std;

int t, n;

bool isPrime (int q) {
	if (q == 0 || q == 1) {
		return false;
	}
	
	if (q == 2) {
		return true;
	}
	
	int _sqrt = sqrt(q);
	
	if (q % 2 == 0) {
		return false;
	}
	
	for (int i = 3; i <= _sqrt; i += 2) {
		if (q % i == 0) {
			return false;
		}
	}
	
	return true;
}

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		
		if (isPrime(n)) {
			printf("%d eh primo\n", n);
		} else {
			printf("%d nao eh primo\n", n);
		}
	}

	return 0;
	
}
