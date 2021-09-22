#include <cstdio>
using namespace std;

double x, y;

int main () {

	scanf("%lf %lf", &x, &y);
	
	if (x == 0.000000 && y == 0.000000) {
		printf("Origem\n");
	} else if (x == 0.000000) {
		printf("Eixo Y\n");
	} else if (y == 0.000000) {
		printf("Eixo X\n");
	} else if (x > 0.000000 && y > 0.000000) {
		printf("Q1\n");
	} else if (x < 0.000000 && y > 0.000000) {
		printf("Q2\n");
	} else if (x > 0.000000 && y < 0.000000) {
		printf("Q4\n");
	} else if (x < 0.000000 && y < 0.000000) {
		printf("Q3\n");
	}

	return 0;
	
}
