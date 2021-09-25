#include <cstdio>
#include <algorithm>
using namespace std;

int x, y, sum;

int main () {

	while (scanf("%d %d", &x, &y), x && y) {
		if (x > y) {
			swap(x, y);
		}
		
		sum = 0;
		for (int i = x; i <= y; i++) {
			printf("%d ", i);
			sum += i;
		}
		
		printf("Sum=%d\n", sum);
	}

	return 0;
	
}
