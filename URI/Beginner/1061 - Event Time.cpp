#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct {
	int d, h, m, s;
} DATE;

DATE eventStart, eventEnd;

void readDate(DATE &date) {
	scanf("Dia %d\n", &date.d);
	scanf("%d : %d : %d\n", &date.h, &date.m, &date.s);
}

int main () {

	readDate(eventStart);
	readDate(eventEnd);
	
	printf("%d dia(s)\n", max(0, eventEnd.d - eventStart.d - 1));
	printf("%d hora(s)\n", (24 - eventStart.h + eventEnd.h) % 24);
	printf("%d minuto(s)\n", (60 - eventStart.m + eventEnd.m) % 60);
	printf("%d segundo(s)\n", (60 - eventStart.s + eventEnd.s) % 60);

	return 0;
	
}
