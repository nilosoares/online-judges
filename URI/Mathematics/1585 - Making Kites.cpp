#include <cstdio>
using namespace std;

int t, d1, d2;

int main () {
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &d1, &d2);
		printf("%d cm2\n", (d1 * d2) / 2);
	}
	
	return 0;
	
}
