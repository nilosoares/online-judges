#include <cstdio>
using namespace std;

int Q, P, D, pags;

int main () {
	
	while (true) {
		scanf("%d", &Q);
		
		if (Q == 0) {
			break;
		}
		
		scanf("%d %d", &D, &P);
		
		pags = (Q * P * D) / (P - Q);
		
		if (pags == 1) {
			printf("%d pagina\n", pags);
		} else {
			printf("%d paginas\n", pags);
		}
	}

	return 0;

}
