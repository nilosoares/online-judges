#include <stdio.h>
using namespace std;

int a, b;

int i_am_feeling_lucky() {
	if (a == b) {
		return a; // three card of the same value
	} else if (a > b) {
		return a; // pair	
	} else {
		return b; // pair
	}
}

int main () {
	
	scanf("%d %d", &a, &b);
	
	printf("%d\n", i_am_feeling_lucky());
	
	return 0;
	
}
