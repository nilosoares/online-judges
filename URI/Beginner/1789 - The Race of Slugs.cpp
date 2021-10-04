#include <cstdio>
using namespace std;

int n, v, _max;

void updateMax() {
	if (_max == 2) {
		if (v >= 20) {
			_max = 3;
		}
	} else if (_max == 1) {
		if (v >= 20) {
			_max = 3;
		} else if (v >= 10) {
			_max = 2;
		}
	}
}

int main () {

	while (scanf("%d", &n) == 1) {
		_max = 1;
		
		while (n--) {
			scanf("%d", &v);
			updateMax();
		}
		
		printf("%d\n", _max);
	}

	return 0;
	
}
