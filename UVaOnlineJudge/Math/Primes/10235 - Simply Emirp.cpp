#include <iostream>
#include <string>
#include <algorithm>
#define N_MAX 1000001
using namespace std;

int numbers[N_MAX];
int primes[N_MAX];
int nb_of_primes;

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
	nb_of_primes = 0;
	
	for (int i = 0; i < N_MAX; i++) {
		if (numbers[i] != -1) {
			primes[++nb_of_primes] = numbers[i];
		}
	}
}

int stringToInt(string s) {
	int integer = 0;
	int multiplier = 1;
	int sLength = s.length();
	
	for (int i = sLength-1; i >= 0; i--) {
		integer += (s[i] - '0') * multiplier;
		
		multiplier *= 10;
	}
	
	return integer;
}

bool isPalindrome(string s) {
	int i = 0;
	int j = s.length() - 1;
	
	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}
		
		i++;
		j--;
	}
	
	return true;
}

bool isPrime(string s) {
	int q = stringToInt(s);
	
	for (int i = 1; i <= nb_of_primes; i++) {
		if ((q % primes[i]) == 0 && q != primes[i]) {
			return false;
		}
	}
	
	return true;
}

bool isEmipr(string s) {
	if (isPalindrome(s)) {
		return false;
	}
	
	reverse(s.begin(), s.end());
	
	return isPrime(s);
}

int main () {
	
	string n;
	
	sieveOfEratosthenes();
	
	fillPrimes();
	
	while (cin >> n) {
		if (!isPrime(n)) {
			cout << n << " is not prime." << endl;
		} else if (!isEmipr(n)) {
			cout << n << " is prime." << endl;
		} else {
			cout << n << " is emirp." << endl;
		}
	}
	
	return 0;
	
}
