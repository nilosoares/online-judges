#include <cstdio>
using namespace std;

double s;

int main() {
	
	s = 1;
	
	for (double i = 2; i <= 100; i++) {
		s += (1/i);
	}
	
	printf("%.2lf\n", s);

	return 0;
	
}
