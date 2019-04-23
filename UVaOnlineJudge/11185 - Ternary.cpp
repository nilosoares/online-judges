#include <cstdio>
#define N_MAX 1001
using namespace std;

long long int number;
int ternary[N_MAX];
int ternarySize;

void fillTernary() {
	if (number == 0) {
		ternary[0] = 0;
		ternarySize = 1;
		return;
	}
	
	int i = 0;
	
	while (number > 0) {
		ternary[i++] = number % 3;
		number /= 3;
	}
	
	ternarySize = i;
}

void printTernary() {
	for (int i = ternarySize-1; i >= 0; i--) {
		printf("%d", ternary[i]);
	}
	printf("\n");
}

int main () {
	
	while (true) {
		scanf("%lld", &number);
		if (number < 0) {
			break;
		}
		
		fillTernary();
		
		printTernary();
	}
	
	return 0;
	
}
