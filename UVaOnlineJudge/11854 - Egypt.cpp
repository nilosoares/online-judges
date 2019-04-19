#include <cstdio>
using namespace std;

int a, b, c;
int h, c1, c2;

int main () {
	
	while (true) {
		// input
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		
		// processing
		if (a > b && a > c) {
			h = a;
			c1 = b;
			c2 = c;
		} else if (b > a && b > c) {
			h = b;
			c1 = a;
			c2 = c;
		} else {
			h = c;
			c1 = a;
			c2 = b;
		}
		
		// Output
		if (h*h == c1*c1 + c2*c2) {
			printf("right\n");
		} else {
			printf("wrong\n");
		}
	}
	
	return 0;
	
}
