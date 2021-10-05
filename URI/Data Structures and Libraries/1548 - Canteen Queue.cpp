#include <cstdio>
#include <queue>
#define N 1000
using namespace std;

int t, n, students[N], nbSamePosition;
priority_queue<int> pq;

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &students[i]);
			pq.push(students[i]);
		}
		
		nbSamePosition = 0;
		for (int i = 0; i < n; i++) {
			if (students[i] == pq.top()) {
				nbSamePosition++;
			}
			pq.pop();
		}
		
		printf("%d\n", nbSamePosition);
	}

	return 0;
	
}
