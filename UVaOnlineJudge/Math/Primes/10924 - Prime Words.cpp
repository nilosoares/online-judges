#include <iostream>
#define ASCII_A 65
#define ASCII_a 97
#define N_MAX 100001
using namespace std;

int numbers[N_MAX];
int primes[N_MAX];
int nbOfPrimes;
string word;

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

int getChartValue(char c) {
	if (c >= ASCII_a) {
		return c - ASCII_a + 1; // a-z
	} else {
		return c - ASCII_A + 27; // A-Z
	}
}

bool isPrimeWord() {
	unsigned int i;
	
	int word_sum = 0;
	for (i = 0; i < word.length(); i++) {
		word_sum += getChartValue(word[i]);
	}
	
	return isPrime(word_sum);
}

int main () {
	
	sieveOfEratosthenes();
	fillPrimes();
	
	while (cin >> word) {
		if (isPrimeWord()) {
			cout << "It is a prime word." << endl;
		} else {
			cout << "It is not a prime word." << endl;
		}
	}
	
	return 0;
	
}
