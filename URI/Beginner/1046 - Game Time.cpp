#include <cstdio>
using namespace std;

int start, end, duration;

int main () {
	
	scanf("%d %d", &start, &end);
	
	if (end == start) {
		duration = 0;
	} else if (end > start) {
		duration = end - start;
	} else {
		duration = (24 - start) + end;
	}
	
	printf("O JOGO DUROU %d HORA(S)\n", duration);
	
	return 0;
	
}
