#include <cstdio>
#define N 1001
using namespace std;

int t, n, counter;
double grades[N], avg;

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		
		avg = 0.00;
		for (int i = 1; i <= n; i++) {
			scanf("%lf", &grades[i]);
			avg += grades[i];
		}
		avg /= n;
		
		counter = 0;
		for (int i = 1; i <= n; i++) {
			if (grades[i] > avg) {
				counter++;
			}
		}
		
		printf("%.3lf%%\n", counter * 100.0 / n);
	}

	return 0;
	
}
