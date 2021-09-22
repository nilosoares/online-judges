#include <cstdio>
#include <algorithm>
using namespace std;

int a, b, sum = 0;

int main () {

	scanf("%d %d", &a, &b);
	
	if (b < a) {
		swap(a, b);
	}
	
	a++;
	if (a % 2 == 0) {
		a++;
	}
	
	for (int i = a; i < b; i += 2) {
		sum += i;
	}

	printf("%d\n", sum);

	return 0;

}
