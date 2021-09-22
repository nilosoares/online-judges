#include <cstdio>
using namespace std;

int n;

int main () {

	scanf("%d", &n);
	
	if (n % 2 == 0) {
		n++;
	}
	
	for (int i = 1; i <= 6; i++) {
		printf("%d\n", n);
		n += 2;
	}

	return 0;
	
}
