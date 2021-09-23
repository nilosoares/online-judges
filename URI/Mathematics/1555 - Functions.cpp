#include <cstdio>
using namespace std;

int t, x, y;
int r, b, c;

int main () {
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &x, &y);
		
		r = (9*x*x) + (y*y);
		b = (2*x*x) + (25*y*y);
		c = - (100 * x) + (y*y*y);
		
		if (r > b && r > c) {
			printf("Rafael ganhou\n");
		} else if (b > r && b > c) {
			printf("Beto ganhou\n");
		} else {
			printf("Carlos ganhou\n");
		}
	}
	
	return 0;
	
}
