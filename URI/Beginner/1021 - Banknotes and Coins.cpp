#include <cstdio>
using namespace std;

int dollars, cents, counter;
int cashNotes[6] = {100, 50, 20, 10, 5, 2};
int coins[6] = {100, 50, 25, 10, 5, 1};

int main () {

	scanf("%d.%d", &dollars, &cents);

	// saida - notas
	printf("NOTAS:\n");
	for (int i = 0; i < 6; i++) {
		counter = dollars / cashNotes[i];
		dollars = dollars - (counter * cashNotes[i]);
		printf("%d nota(s) de R$ %d.00\n", counter, cashNotes[i]);
	}
	
	cents += dollars * 100;
	
	// saida - moedas
	printf("MOEDAS:\n");
	for (int i = 0; i < 6; i++) {
		counter = cents / coins[i];
		cents = cents - (counter * coins[i]);
		printf("%d moeda(s) de R$ %.2f\n", counter, coins[i]/100.0);
	}

	return 0;
	
}
