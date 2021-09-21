#include <cstdio>
#include <vector>
#include <algorithm>
#define N_MAX 36
using namespace std;

int t, n, k;
vector<int> nums;

int isc, _and, _max;

void preBT() {
	isc = 0;
	_max = -1;
	_and = 2147483647;
}

void BT(int p) {
	int _andCache;
	for (int i = p; i <= n; i++) {
		isc++;
		_andCache = _and;
		
		_and &= nums[i];
		
		if (isc == k) {
			_max = max(_max, _and);
		}
		else {
			BT(i+1);
		}
		
		_and = _andCache;
		isc--;
	}
}

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &n, &k);
		
		nums.resize(n+1);
		for (int i = 1; i <= n; i++) {
			scanf("%d", &nums[i]);
		}
		sort(nums.begin(), nums.end());
		
		preBT();
		BT(1);
		
		printf("%d\n", _max);
	}

	return 0;

}
