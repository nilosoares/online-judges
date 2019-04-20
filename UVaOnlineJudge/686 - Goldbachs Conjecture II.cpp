#include <cstdio>
#define N_MAX 100001
using namespace std;

int numbers[N_MAX];
int primes[N_MAX];
int nbOfPrimes;
int n;

void sieveOfEratosthenes () {
	for (int i = 0; i < N_MAX; i++) {
		numbers[i] = i+2;
	}
	
	for (int i = 0; i < N_MAX; i++) {
		if (numbers[i] != -1) {
			for (int j = 2 * numbers[i] - 2; j < N_MAX; j += numbers[i]) {
				numbers[j] = -1;
			}
		}
	}
}

void fillPrimes () {
	nbOfPrimes = 0;
	
	for (int i = 0; i < N_MAX; i++) {
		if (numbers[i] != -1) {
			primes[++nbOfPrimes] = numbers[i];
		}
	}
}

bool isPrime(int q) {
	for (int i = 1; i <= nbOfPrimes; i++) {
		if ((q % primes[i]) == 0 && q != primes[i]) {
			return false;
		}
	}
	return true;
}

int goldbachsConjecture() {
	int counter = 0;
	
	for (int i = 1; i <= nbOfPrimes; i++) {
		if (primes[i] > n/2) {
			break;
		}
		if (isPrime(n-primes[i])) {
			counter++;
		}
	}
	
	return counter;
}

int main () {
	
	sieveOfEratosthenes();
	fillPrimes();
	
	while (true) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		
		printf("%d\n", goldbachsConjecture());
	}
	
	return 0;
	
}
