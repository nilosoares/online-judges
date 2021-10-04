#include <cstdio>
using namespace std;

int n;

int main() {
	
	while (true) {
		scanf("%d", &n);
		
		if (n == 0) {
			break;
		}
		
		if (n % 2 != 0) {
			n++;
		}
		
		printf("%d\n", (5 * n) + 20);
	}

	return 0;
	
}
