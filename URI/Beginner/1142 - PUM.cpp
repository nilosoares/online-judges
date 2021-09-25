#include <cstdio>
using namespace std;

int lines, n;

int main () {

	scanf("%d", &lines);
	
	n = 1;
	for (int i = 1; i <= lines; i++) {
		for (int j = 1; j <= 3; j++) {
			printf("%d ", n++);
		}
		printf("PUM\n");
		
		n++;
	}

	return 0;
	
}
