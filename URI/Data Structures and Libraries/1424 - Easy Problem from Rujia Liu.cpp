#include <cstdio>
#include <list>
#include <map>
#include <algorithm>
using namespace std;

int n, m;
map< int, list<int> > numbers;
list<int>::iterator it;

void resetVars() {
	map< int, list<int> > empty;
	swap(numbers, empty);
}

void readVector() {
	int v;
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &v);
		
		numbers[v].push_back(i);
	}
}

void runQuery(int k, int v) {
	int index = 0;
	
	if (k <= (int) numbers[v].size()) {
		it = numbers[v].begin();
		for (int i = 1; i < k; i++) it++;
		index = *it;
	}
	printf("%d\n", index);
}

void readQueries() {
	int k, v;
	
	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &k, &v);
		runQuery(k, v);
	}
}

int main () {
	
	while (scanf("%d %d", &n, &m) == 2) {
		resetVars();
		readVector();
		readQueries();
	}
	
	return 0;
	
}
