#include <cstdio>
using namespace std;

int a, b;

int main () {
	
	while (true) {
		scanf("%d %d", &a, &b);
		
		if (a == 0 && b == 0) {
			break;
		}
		
		printf("%d\n", a-(b-a));
	}
	
	return 0;
	
}
