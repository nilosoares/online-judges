#include <cstdio>
using namespace std;

int a, b;

int main () {

	scanf("%d %d", &a, &b);
	
	if (a >= b && b && a%b == 0) {
		printf("Sao Multiplos\n");
	} else if (a < b && a && b%a == 0) {
		printf("Sao Multiplos\n");
	} else {
		printf("Nao sao Multiplos\n");
	}

	return 0;
	
}
