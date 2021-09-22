#include <cstdio>
using namespace std;

double salary, tax;

int main () {
	
	scanf("%lf", &salary);
	
	tax = 0.00;
	
	if (salary > 4500.00) {
		tax += (salary - 4500.00) * 0.28;
		salary = 4500.00;
	}
	if (salary >= 3000.01) {
		tax += (salary - 3000.01) * 0.18;
		salary = 3000.00;
	}
	if (salary >= 2000.01) {
		tax += (salary - 2000.01) * 0.08;
		salary = 2000.00;
	}
	
	if (tax == 0.00) {
		printf("Isento\n");
	} else {
		printf("R$ %.2lf\n", tax);
	}
	
	return 0;
	
}
