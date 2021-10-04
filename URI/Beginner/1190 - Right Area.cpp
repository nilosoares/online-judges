#include <cstdio>
using namespace std;

char c;
double n, sum;

int main () {

	scanf("%c\n", &c);
	
	sum = 0.00;
	for (int i = 1; i <= 12; i++) {
		for (int j = 1; j <= 12; j++) {
			scanf("%lf", &n);
			if (j > i && i+j > 13) {
				sum += n;
			}
		}
	}
	
	if (c == 'S') {
		printf("%.1f\n", sum);
	} else {
		printf("%.1f\n", sum / 30.0);
	}

	return 0;

}
