#include <cstdio>
using namespace std;

int tea;
int answer;
int counter = 0;

int main () {
	
	scanf("%d", &tea);
	
	for (int i = 1; i <= 5; i++) {
		scanf("%d", &answer);
		
		if (answer == tea) {
			counter++;
		}
	}
	
	printf("%d\n", counter);
	
	return 0;
	
}
