#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int a, b;
long long int sum;

int main () {

	scanf("%d %d", &a, &b);
	if (a > b) {
		swap(a, b);
	}
	
	sum = 0;
	for (int i = a; i <= b; i++) {
		if (abs(i) % 13 > 0) {
			sum += i;
		}
	}
	
	printf("%lld\n", sum);

	return 0;
	
}
