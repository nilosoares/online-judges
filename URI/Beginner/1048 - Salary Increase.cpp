#include <cstdio>
using namespace std;

float salary, percentage;

int main () {

	scanf("%f", &salary);
	
	if (salary < 400.01) {
		percentage = 1.15;
	} else if (salary < 800.01) {
		percentage = 1.12;
	} else if (salary < 1200.01) {
		percentage = 1.10;
	} else if (salary < 2000.01) {
		percentage = 1.07;
	} else {
		percentage = 1.04;
	}
	
	printf("Novo salario: %.2f\n", salary * percentage);
	printf("Reajuste ganho: %.2f\n", (percentage - 1.00) * salary);
	printf("Em percentual: %.0f %%\n", (percentage - 1.00) * 100);

	return 0;
	
}
