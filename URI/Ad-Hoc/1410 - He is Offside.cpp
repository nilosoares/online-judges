#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main () {
	
	int na, nd;
	int posa, posd1, posd2;
	int tmp;
	
	scanf("%d %d", &na, &nd);
	
	while (na && nd) {
		posa = posd1 = posd2 = 100000;
		
		while (na--) {
			scanf("%d", &tmp);
			
			if (tmp < posa) {
				posa = tmp;
			}
		}
		
		while (nd--) {
			scanf("%d", &tmp);
			
			if (tmp < posd1) {
				posd2 = posd1;
				posd1 = tmp;
			} else if (tmp < posd2) {
				posd2 = tmp;
			
			}
		}
		
		if (posa >= posd1 && posa >= posd2) {
			printf("N\n");
		} else {
			printf("Y\n");
		}
		
		scanf("%d %d", &na, &nd);
	}
	
	return 0;

}
