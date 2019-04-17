#include <cstdio>
using namespace std;

int t;
int n;

int countOnes(int decimal) {
	int counter = 0;
	
	while (decimal > 1) {
		if (decimal % 2 == 1) {
			counter++;
		}
		decimal /= 2;
	}
	if (decimal == 1) {
		counter++;
	}
	
	return counter;
}

int hexToDec(int hex) {
	int dec = 0;
	int steps = 1;
	
	while (hex > 0) {
		dec += (hex % 10) * steps;
		hex /= 10;
		steps *= 16;
	}
	
	return dec;
}

int main () {
	
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		
		printf("%d %d\n", countOnes(n), countOnes(hexToDec(n)));
	}

	return 0;
	
}
