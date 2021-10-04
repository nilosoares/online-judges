#include <cstdio>
#include <cmath>
using namespace std;

typedef struct {
	int population;
	double rate;
} CITY;

int t, years;
CITY a, b;

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &a.population, &b.population);
		scanf("%lf %lf", &a.rate, &b.rate);
		
		a.rate /= 100.0;
		b.rate /= 100.0;
		for (years = 1; years <= 101 && b.population >= a.population; years++) {
			a.population += floor(a.population * a.rate);
			b.population += floor(b.population * b.rate);
		}
		years -= 1;
		
		if (years > 100) {
			printf("Mais de 1 seculo.\n");
		} else {
			printf("%d anos.\n", years);
		}
	}

	return 0;
	
}
