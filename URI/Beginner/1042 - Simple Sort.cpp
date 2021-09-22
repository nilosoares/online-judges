#include <cstdio>
using namespace std;

int a, b, c;
int x, y, z;

void simpleSort () {
	if (a <= b && a <= c) {
		x = a;
		if (b < c) {
			y = b;
			z = c;
		} else {
			y = c;
			z = b;
		}
	} else if (b <= a && b <= c) {
		x = b;
		if (a < c) {
			y = a;
			z = c;
		} else {
			y = c;
			z = a;
		}
	} else if (c <= a && c <= b) {
		x = c;
		if (a < b) {
			y = a;
			z = b;
		} else {
			y = b;
			z = a;
		}
	}
}

int main () {
	
	scanf("%d %d %d", &a, &b, &c);
	
	simpleSort();
	
	printf("%d\n%d\n%d\n\n", x, y, z);
	printf("%d\n%d\n%d\n", a, b, c);
	
}
