#include <cstdio>
using namespace std;

int _menu;

double readGrade() {
	double grade;
	
	scanf("%lf", &grade);
	
	while (grade < 0.00 || grade > 10.00) {
		printf("nota invalida\n");
		scanf("%lf", &grade);
	}
		
	return grade;
}

void calcAvg() {
	double grade1, grade2;
	
	grade1 = readGrade();
	grade2 = readGrade();
	
	printf("media = %.2lf\n", (grade1 + grade2) / 2.00);
}

void menu() {
	do {
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &_menu);
	} while (_menu != 1 && _menu != 2);
}

int main () {
	
	do {
		calcAvg();
		menu();
	} while (_menu == 1);

	return 0;
	
}
