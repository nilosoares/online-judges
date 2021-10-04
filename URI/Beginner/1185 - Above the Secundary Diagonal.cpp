#include <cstdio>
using namespace std;

char c;
int denominator = 1;
float n, sum, avg;

int main() {

	scanf("%c", &c);
	if (c == 'M') {
		denominator = 66;
	}
	
	sum = 0.00;
	for (int i = 1; i <= 12; i++) {
		for (int j = 1; j <= 12; j++) {
			scanf("%f", &n);
			if (j+i < 13) {
				sum += n;
			}
		}
	}
	
	avg = sum / denominator;
	
	printf("%.1f\n", avg);

	return 0;

}
