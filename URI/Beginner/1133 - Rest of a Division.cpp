#include <cstdio>
#include <algorithm>
using namespace std;

int a, b;

int main () {

	scanf("%d %d", &a, &b);
	
	if (a > b) {
		swap(a, b);
	}
	
	for (int i = a+1; i < b; i++) {
		if (i % 5 == 2 || i % 5 == 3) {
			printf("%d\n", i);
		}
	}

	return 0;
	
}
