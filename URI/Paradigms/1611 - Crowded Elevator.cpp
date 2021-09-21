#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int t, n, c, m, cost, queueIdx, _max;
vector<int> queue;

int main () {
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d %d", &n, &c, &m);
		
		queue.resize(m+1);
		for (int i = 1; i <= m; i++) {
			scanf("%d", &queue[i]);
		}
		
		sort(queue.begin(), queue.end());
		
		cost = 0;
		queueIdx = m;
		while (queueIdx >= 1) {
			_max = -1;
			for (int i = 1; i <= c && queueIdx >= 1; i++) {
				_max = max(_max, queue[queueIdx--]);
			}
			cost += _max * 2;
		}
		
		printf("%d\n", cost);
	}
	
	return 0;
	
}
