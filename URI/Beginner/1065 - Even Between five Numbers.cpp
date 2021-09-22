#include <cstdio>
using namespace std;

int n, counter;

int main () {

	counter = 0;
	
	for (int i = 1; i <= 5; i++) {
		scanf("%d", &n);
		
		if (n % 2 == 0) {
			counter++;
		}
	}
	
	printf("%d valores pares\n", counter);

	return 0;
	
}
