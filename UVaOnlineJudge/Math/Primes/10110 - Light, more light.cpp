#include <cstdio>
#define N_MAX 100001
using namespace std;

int numbers[N_MAX];
int primes[N_MAX];
int nbOfPrimes;

long long int factors[1001];
int nbOfFactors;

long long int divisors[1001];
int nbOfDivisors;

long long int n;

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

bool isPrime(long long int q) {
	for (int i = 1; i <= nbOfPrimes; i++) {
		if ((q % primes[i]) == 0 && q != primes[i]) {
			return false;
		}
	}
	return true;
}

void fillFactors(long long int q) {
	factors[0] = 1;
	nbOfFactors = 0;
	
	for (int i = 1; i <= nbOfPrimes; i++) {
		while ((q % primes[i]) == 0) {
			factors[++nbOfFactors] = primes[i];
			q = q/primes[i];
		}
		if (q == 1) {
			break;
		}
	}
	
	if (q != 1) {
		factors[++nbOfFactors] = q;
	}
}

void fillDivisors(long long int q) {
	long long int k = 1;
	
	divisors[1] = 1;
	nbOfDivisors = 1;
	int tmpNbOfDivisors = 1;
	
	for (int i = 1; i <= nbOfFactors; i++) {
		if (factors[i] == factors[i-1]) {
			k = k * factors[i];
		} else {
			tmpNbOfDivisors = nbOfDivisors;
			k = factors[i];
		}
		
		for (int j = 1; j <= tmpNbOfDivisors; j++) {
			divisors[++nbOfDivisors] = k * divisors[j];
		}
	}
}

int main () {
	
	sieveOfEratosthenes();
	fillPrimes();
	
	while (true) {
		// input
		scanf("%lld", &n);
		if (n == 0) {
			break;
		}
		
		// processing
		fillFactors(n);
		fillDivisors(n);
		
		// output
		if (nbOfDivisors % 2 == 0) {
			printf("no\n");
		} else {
			printf("yes\n");
		}
	}
	
	return 0;
	
}
