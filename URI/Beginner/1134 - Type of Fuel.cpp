#include <cstdio>
using namespace std;

int cod, comb[4];

int main () {

	while (scanf("%d", &cod), cod != 4) {
		if (!(cod == 1 || cod == 2 || cod == 3)) {
			continue;
		}
		comb[cod]++;
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", comb[1]);
	printf("Gasolina: %d\n", comb[2]);
	printf("Diesel: %d\n", comb[3]);

	return 0;
	
}
