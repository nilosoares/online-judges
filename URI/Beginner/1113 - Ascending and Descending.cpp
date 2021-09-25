#include <cstdio>
using namespace std;

int a, b;

int main () {

	while (scanf("%d %d", &a, &b) == 2) {
		if (a > b) {
			printf("Decrescente\n");
		} else if (a < b) {
			printf("Crescente\n");
		}
	}

	return 0;
	
}
