#include <cstdio>
using namespace std;

double s;

int main() {
	
	s = 1;
	
	for (double num = 3, den = 2; num <= 39; num += 2, den *= 2) {
		s += (num/den);
	}
	
	printf("%.2lf\n", s);

	return 0;
	
}
