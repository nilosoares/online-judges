#include <cstdio>
using namespace std;

int main () {

	for (int i = 1; i <= 9; i += 2) {
		for (int j = 6+i; j >= i+4; j--) {
			printf("I=%d J=%d\n", i, j);
		}
	}

	return 0;
	
}
