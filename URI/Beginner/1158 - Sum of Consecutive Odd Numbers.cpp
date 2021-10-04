#include <cstdio>
using namespace std;

int t, x, y;

int main() {
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &x, &y);
		
		if (x % 2 == 0) {
			x++;
		}
		
		printf("%d\n", (x * y) + ((y-1) * y));
	}

	return 0;
	
}
