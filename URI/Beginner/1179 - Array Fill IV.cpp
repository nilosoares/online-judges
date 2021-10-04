#include <cstdio>
#include <cstdlib>
#define N 5
using namespace std;

int n;
int odd[N], ki;
int even[N], kp;

void printOdd() {
	for (int i = 0; i < ki; i++) {
		printf("impar[%d] = %d\n", i, odd[i]);
	}
}

void printEven() {
	for (int i = 0; i < kp; i++) {
		printf("par[%d] = %d\n", i, even[i]);
	}
}

void pushOdd(int n) {
	if (abs(n) % 2 == 1) {
		odd[ki++] = n;
		
		if (ki == 5) {
			printOdd();
			ki = 0;
		}
	}
}

void pushEven(int n) {
	if (abs(n) % 2 == 0) {
		even[kp++] = n;
		
		if (kp == 5) {
			printEven();
			kp = 0;
		}
	}
}

int main() {

	ki = kp = 0;
	
	for (int i = 1; i <= 15; i++) {
		scanf("%d", &n);
		
		pushOdd(n);
		pushEven(n);
	}
	
	printOdd();
	printEven();

	return 0;
	
}
