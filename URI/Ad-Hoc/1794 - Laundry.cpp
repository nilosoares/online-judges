#include <cstdio>
#include <algorithm>
using namespace std;

int n, la, lb, sa, sb;
int _min, _max;

bool isPossible() {
	for (int i = _min; i <= _max; i++) {
		if (n % i == 0) {
			return true;
		}
	}
	
	return false;
}

int main () {
	
	scanf("%d", &n);
	scanf("%d %d", &la, &lb);
	scanf("%d %d", &sa, &sb);
	
	_min = max(la, sa);
	_max = min(lb, sb);
	
	if (_max < _min || !isPossible()) {
		printf("impossivel\n");
	} else {
		printf("possivel\n");
	}
	
	return 0;
	
}
