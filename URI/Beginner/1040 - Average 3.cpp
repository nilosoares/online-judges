#include <cstdio>
using namespace std;

double n1, n2, n3, n4, avg1, n5, avg2;

int main () {

	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	
	avg1 = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 4.0) + (n4 * 1.0)) / 10.0;
	
	printf("Media: %.1lf\n", avg1);
	
	if (avg1 >= 7.000000001) {
		printf("Aluno aprovado.\n");
		
	} else if (avg1 < 5.000000000) {
		printf("Aluno reprovado.\n");
		
	} else {
		printf("Aluno em exame.\n");
		
		scanf("%lf", &n5);
		
		printf("Nota do exame: %.1lf\n", n5);
		
		avg2 = (avg1 + n5) / 2.0;
		
		if (avg2 < 5.000000000) {
			printf("Aluno reprovado.\n");
		} else {
			printf("Aluno aprovado.\n");
		}
		
		printf("Media final: %.1f\n", avg2);
		
	}

	return 0;
	
}
