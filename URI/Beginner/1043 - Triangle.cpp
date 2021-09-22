#include <cstdio>
#include <cstdlib>
using namespace std;

float x, y, z;

int main () {

	scanf("%f %f %f", &x, &y, &z);
	
	if (x > y-z && x > z-y && x < y+z) {
		printf("Perimetro = %.1f\n", x+y+z);
	} else {
		printf("Area = %.1f\n", (x+y) * z / 2);
	}

	return 0;
	
}
