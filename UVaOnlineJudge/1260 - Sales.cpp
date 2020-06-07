#include <stdio.h>
#define N_MAX 1001
using namespace std;

int t;
int n;
int a[N_MAX];

int getSumOfListB() {
	int sum = 0;
	
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[j] <= a[i]) {
				sum++;
			}
		}
	}
	
	return sum;
}

int main () {

	scanf("%d", &t);
	while (t--) {
		// input - list size
		scanf("%d", &n);
		
		// input - list a
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		
		// process & output
		printf("%d\n", getSumOfListB());
	}

	return 0;

}
