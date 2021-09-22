#include <cstdio>
using namespace std;

float n, avg;
int counter;

int main () {

	counter = 0;
	avg = 0.00;
	
	for (int i = 1; i <= 6; i++) {
		scanf("%f", &n);
		
		if (n > 0.00) {
			counter++;
			avg += n;
		}
	}
	
	avg /= counter;
	
	printf("%d valores positivos\n", counter);
	printf("%.1f\n", avg);

	return 0;
	
}
