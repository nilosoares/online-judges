#include <cstdio>
#define EPS 0.000000001
using namespace std;

double grade, prevGrade;

int main () {

	prevGrade = -1.0;
	
	while (scanf("%lf", &grade) == 1) {
		if (grade <= EPS || grade >= 10.0 + EPS) {
			printf("nota invalida\n");
			continue;
		}
		
		if (prevGrade != -1.0) {
			printf("media = %.2f\n", (grade + prevGrade) / 2.0);
			break;
		}
		
		prevGrade = grade;
	}

	return 0;
	
}
