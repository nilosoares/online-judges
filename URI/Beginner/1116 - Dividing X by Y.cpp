#include <cstdio>
using namespace std;

int t;
double num, den;

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%lf %lf", &num, &den);
		
		if (den == 0.000000) {
			printf("divisao impossivel\n");
		} else {
			printf("%.1lf\n", num/den);
		}
	}

	return 0;
	
}
