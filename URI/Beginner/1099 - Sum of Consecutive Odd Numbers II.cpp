#include <cstdio>
#include <algorithm>
using namespace std;

int t, x, y, sum;

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &x, &y);
		
		if (x > y) {
			swap(x, y);
		}
		
		if (x % 2 == 0) {
			x += 1;
		} else {
			x += 2;
		}
		
		sum = 0;
		for (int i = x; i < y; i += 2) {
			sum += i;
		}
		
		printf("%d\n", sum);
	}

	return 0;
	
}
