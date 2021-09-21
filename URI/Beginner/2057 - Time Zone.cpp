#include <cstdio>
using namespace std;

int s, t, f, a;

int main () {
	
	scanf("%d %d %d", &s, &t, &f);
	
	a = (s + t + f) % 24;
	if (a < 0) {
		a += 24;
	}
	
	printf("%d\n", a);
	
	return 0;
	
}
