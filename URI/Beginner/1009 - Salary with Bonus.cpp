#include <cstdio>
#include <cstring>
using namespace std;

char nome[60];
double salario, vendas;

int main () {
	
	scanf("%s %lf %lf", nome, &salario, &vendas);
	printf("TOTAL = R$ %.2lf\n", salario + (vendas * 0.15));
	
	return 0;
	
}
