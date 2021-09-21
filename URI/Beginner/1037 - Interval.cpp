#include <cstdio>
using namespace std;

double n;

int main () {
	
	scanf("%lf", &n);
	
	if (n > 100.0000000) {
		printf("Fora de intervalo\n");
	} else if (n > 75.0000000) {
		printf("Intervalo (75,100]\n");
	} else if (n > 50.0000000) {
		printf("Intervalo (50,75]\n");
	} else if (n > 25.0000000) {
		printf("Intervalo (25,50]\n");
	} else if (n >= 0.0000000) {
		printf("Intervalo [0,25]\n");
	} else {
		printf("Fora de intervalo\n");
	}
	
	return 0;
	
}
