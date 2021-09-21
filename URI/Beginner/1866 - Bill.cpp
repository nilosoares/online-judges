#include <stdio.h>
using namespace std;

int t, n;

int main () {
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		
		printf("%d\n", n % 2);
	}
	
	return 0;
	
}
