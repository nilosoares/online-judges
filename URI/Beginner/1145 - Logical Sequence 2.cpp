#include <cstdio>
using namespace std;

int a, b, num;

int main () {

	scanf("%d %d", &a, &b);
	
	num = 1;
	
	for (int i = 1; num <= b; i++) {
		for (int j = 1; j < a && num <= b; j++) {
			printf("%d ", num++);
		}
		
		if (num <= b) {
			printf("%d\n", num++);
		} else {
			printf("\n");
		}
	}

	return 0;
	
}
