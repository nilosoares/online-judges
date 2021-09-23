#include <cstdio>
using namespace std;

int t, n, id;

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		
		while (n--) {
			scanf("%d", &id);
			
			switch (id) {
				case 1: printf("Rolien\n"); break;
				case 2: printf("Naej\n"); break;
				case 3: printf("Elehcim\n"); break;
				case 4: printf("Odranoel\n"); break;
			}
		}
	}

	return 0;
	
}
