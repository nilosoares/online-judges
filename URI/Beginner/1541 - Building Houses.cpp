#include <cstdio>
#include <cmath>
#define N 14
using namespace std;

int a, b, c;
double t;

int main () {

	while (true) {
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		
		scanf("%d", &b);
		scanf("%d", &c);
		
		t = a * b * 100.0 / c;
		
		printf("%d\n", (int) trunc(sqrt(t)));
	}

	return 0;
	
}
