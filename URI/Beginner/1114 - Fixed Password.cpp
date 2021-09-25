#include <cstdio>
using namespace std;

int n;

int main () {

	while (true) {
		scanf("%d", &n);
		
		if (n != 2002) {
			printf("Senha Invalida\n");
		} else {
			printf("Acesso Permitido\n");
			break;
		}
	}

	return 0;
	
}
