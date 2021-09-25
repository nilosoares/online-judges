#include <cstdio>
using namespace std;

int ii, id, j;

bool getCond () {
	if (ii < 2 && id < 10) {
		return true;
	} else if (ii == 2 && id == 0) {
		return true;
	}
	
	return false;
}

int main () {

	for (ii = 0; ii <= 2; ii++) {
		for (id = 0; getCond(); id += 2) {
			for (j = 1+ii; j <= 3+ii; j++) {
				if (id == 0) {
					printf("I=%d J=%d\n", ii, j);
				} else {
					printf("I=%d.%d J=%d.%d\n", ii, id, j, id);
				}
			}
		}
	}

	return 0;
	
}
