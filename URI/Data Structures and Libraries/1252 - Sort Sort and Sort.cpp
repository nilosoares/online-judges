#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, number;
vector<int> numbers;

bool compare(int i, int j) {
	if (i%m < j%m) {
		return true;
	} else if (i%m == j%m) {
		if (i%2 != 0) {
			if (j%2 == 0) {
				return true;
			} else if (i > j) {
				return true;
			}
		} else if (j%2 == 0 && i < j) {
			return true;
		}
	}
	return false;
}

int main() {
	
	while (scanf("%d %d", &n, &m), n && m) {
		vector<int> emptyVi;
		swap(numbers, emptyVi);
		
		for (int i = 1; i <= n; i++) {
			scanf("%d", &number);
			numbers.push_back(number);
		}
		
		sort(numbers.begin(), numbers.end(), compare);
		
		printf("%d %d\n", n, m);
		for (int i = 0; i < n; i++) {
			printf("%d\n", numbers[i]);
		}
	}
	printf("0 0\n");
	
	return 0;
	
}
