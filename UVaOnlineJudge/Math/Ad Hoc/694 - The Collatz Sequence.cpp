#include <cstdio>
using namespace std;

long long int n, limit;
int nbOfTerms;

void collatzSequence(long long int q) {
	if (q > limit) {
		return;
	}
	
	nbOfTerms++;
	
	if (q == 1) {
		return;
	} else if (q % 2 == 0) {
		collatzSequence(q/2);
	} else {
		collatzSequence(3*q + 1);
	}
}

int main () {
	
	int t = 1;
	while (true) {
		// input
		scanf("%lld %lld", &n, &limit);
		if (n < 0 && limit < 0) {
			break;
		}
		
		// processing
		nbOfTerms = 0;
		collatzSequence(n);
		
		// output
		printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n", t, n, limit, nbOfTerms);
		
		t++;
	}	
	
	return 0;
	
}
