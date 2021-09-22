#include <cstdio>
using namespace std;

int h1, m1, s1;
int h2, m2, s2;
int h3, m3, s3;

int main () {
	
	scanf("%d %d", &h1, &m1);
	scanf("%d %d", &h2, &m2);
	
	s1 = (h1 * 3600) + (m1 * 60);
	s2 = (h2 * 3600) + (m2 * 60);
	
	if (s2 >= s1) {
		s3 = s2-s1;
	} else {
		s3 = (86400 - s1) + s2;
	}
	
	h3  = s3 / 3600;
	s3 %= 3600;
	m3  = s3 / 60;
	s3 %= 60;
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h3, m3);
	
	return 0;
	
}
