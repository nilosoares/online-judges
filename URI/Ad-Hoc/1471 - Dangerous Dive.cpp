#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int n, r;
priority_queue<int> pq;

int nextVolunteer() {
	int v = 0;
	
	if (pq.size()) {
		v = -pq.top();
		pq.pop();
	}
	
	return v;
}

int main () {
	
	while (scanf("%d %d", &n, &r) == 2) {
		// reset variables
		priority_queue<int> emptyPq;
		swap(pq, emptyPq);
		
		// input
		int v;
	
		for (int i = 1; i <= r; i++) {
			scanf("%d", &v);
			pq.push(-v);
		}
		
		// process and output
		if (n == r) {
			printf("*");
		} else {
			int i = 1, v = nextVolunteer();
			
			while (i <= n) {
				if (i == v) {
					v = nextVolunteer();
				} else {
					printf("%d ", i);
				}
				i++;
			}
		}
		printf("\n");
	}
	
	return 0;
	
}
