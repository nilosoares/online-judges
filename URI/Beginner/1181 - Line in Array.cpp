#include <cstdio>
using namespace std;

char c;
int row;
float n, sum;

int main() {

	scanf("%d\n", &row);
	scanf("%c\n", &c);
	
	sum = 0.00;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			scanf("%f", &n);
			
			if (i == row) {
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
