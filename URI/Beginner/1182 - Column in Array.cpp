#include <cstdio>
using namespace std;

char c;
int column;
float n, sum;

int main () {
	
	scanf("%d\n", &column);
	scanf("%c\n", &c);
	
	sum = 0.00;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			scanf("%f", &n);
			if (j == column) {
				sum += n;
			}
		}
	}
	
	if (c == 'S') {
		printf("%.1f\n", sum);
	} else {
		printf("%.1f\n", sum / 12.0);
	}
	
	return 0;
	
}
