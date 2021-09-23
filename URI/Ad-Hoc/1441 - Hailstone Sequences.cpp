#include <cstdio>
using namespace std;

int a0, _max;

void sequence(int hAnt) {
	int h;
	
	while (hAnt != 1) {
		if (hAnt % 2 == 0) {
			h = hAnt / 2;
		} else {
			h = (3 * hAnt) + 1;
		}
		
		if (h > _max) {
			_max = h;
		}
		
		hAnt = h;
	}
}

int main () {

	while (scanf("%d", &a0), a0) {
		_max = a0;
		sequence(a0);
		printf("%d\n", _max);
	}

	return 0;
	
}
