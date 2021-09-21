#include <cstdio>
using namespace std;

#define PI 3.14159

double r, v;

int main () {

	scanf("%lf", &r);
	v = (4.0 * PI * r * r * r) / 3.0;
	printf("VOLUME = %.3lf\n", v);

	return 0;

}
