// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2456
// Calcular primos
// Calcular quadrados perfeitos até 100000
// Contar quadrados perfeitos em um intervalo [a, b]
#include <cstdio>
#define N_MAX 100001
using namespace std;

int squareNumbers[N_MAX];
int nbSquaresNumbers;
int dp[N_MAX];
int a, b;

void fillSquareNumbers() {
	nbSquaresNumbers = 0;
	
	squareNumbers[0] = 0;
	for (int i = 1; i * i < N_MAX; i++) {
		squareNumbers[i] = i*i;
		
		nbSquaresNumbers++;
	}
}

void fillDp() {
	dp[0] = 0;
	
	int sn = 1; // square number index
	for (int i = 1; i < N_MAX; i++) {
		dp[i] = dp[i-1];
		
		if (squareNumbers[sn] == i) {
			dp[i] += 1;
			sn++;
		}
	}
}

int main () {
	
	fillSquareNumbers();
	
	fillDp();
	
	while (true) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		
		printf("%d\n", dp[b] - dp[a-1]);
	}
	
	return 0;
	
}
