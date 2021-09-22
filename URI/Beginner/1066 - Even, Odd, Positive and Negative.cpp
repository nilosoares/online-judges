#include <cstdio>
#include <cstdlib>
using namespace std;

int n, countEven, countOdd, countPos, countNeg;

int main () {

	countEven = countOdd = countPos = countNeg = 0;
	
	for (int i = 1; i <= 5; i++) {
		scanf("%d", &n);
		
		if (abs(n) % 2 == 0) {
			countEven++;
		} else {
			countOdd++;
		}
		
		if (n > 0) {
			countPos++;
		} else if (n < 0) {
			countNeg++;
		}
	}
	
	printf("%d valor(es) par(es)\n", countEven);
	printf("%d valor(es) impar(es)\n", countOdd);
	printf("%d valor(es) positivo(s)\n", countPos);
	printf("%d valor(es) negativo(s)\n", countNeg);

	return 0;
	
}
