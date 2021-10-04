#include <cstdio>
using namespace std;

int a, n, sum;

int main () {

	scanf("%d", &a);
	
	while (scanf("%d", &n), n <= 0);
	
	sum = 0;
	while (n--) {
		sum += a++;
	}
	
	printf("%d\n", sum);

	return 0;
	
}
