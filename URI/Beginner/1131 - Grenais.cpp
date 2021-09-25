#include <cstdio>
using namespace std;

int menu, nbMatches, goalI, goalG, vicI, vicG, draws;

int main () {
	
	nbMatches = vicI = vicG = draws = 0;

	do {
		nbMatches++;
		
		scanf("%d %d", &goalI, &goalG);
		
		if (goalI > goalG) {
			vicI++;
		} else if (goalG > goalI) {
			vicG++;
		} else {
			draws++;
		}
		
		printf("Novo grenal (1-sim 2-nao)\n");
	} while (scanf("%d", &menu), menu == 1);
	
	printf("%d grenais\n", nbMatches);
	printf("Inter:%d\n", vicI);
	printf("Gremio:%d\n", vicG);
	printf("Empates:%d\n", draws);
	
	if (vicI > vicG) {
		printf("Inter venceu mais\n");
	} else if (vicG > vicI) {
		printf("Gremio venceu mais\n");
	} else {
		printf("Nao houve vencedor\n");
	}

	return 0;
	
}
