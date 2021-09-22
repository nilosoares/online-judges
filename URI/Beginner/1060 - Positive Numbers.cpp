#include <cstdio>
using namespace std;

float n;
int counter;

int main () {

	counter = 0;
	
	for (int i = 1; i <= 6; i++) {
		scanf("%f", &n);
		
		if (n > 0.00) {
			counter++;
		}
	}
	
	printf("%d valores positivos\n", counter);

	return 0;
	
}
