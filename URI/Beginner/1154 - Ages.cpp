#include <cstdio>
using namespace std;

int total;
float n, sum;

int main () {

	sum = 0.00;
	total = 0;
	
	while (true) {
		scanf("%f", &n);
		
		if (n < 0) {
			break;
		}
		
		sum += n;
		
		total++;
	}
	
	printf("%.2f\n", sum / total);

	return 0;
	
}
