#include <cstdio>
#include <algorithm>
using namespace std;

double a, b, c, a2, b2, c2;

int main () {
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if (a < b) {
		swap(a, b);
	}
	if (a < c) {
		swap(a, c);
	}
	if (b < c) {
		swap(b, c);
	}
	
	a2 = a*a;
	b2 = b*b;
	c2 = c*c;
	
	if (a >= b + c) {
		printf("NAO FORMA TRIANGULO\n");
	} else {
		if (a2 == b2 + c2) {
			printf("TRIANGULO RETANGULO\n");
		} else if (a2 > b2 + c2) {
			printf("TRIANGULO OBTUSANGULO\n");
		} else if (a2 < b2 + c2) {
			printf("TRIANGULO ACUTANGULO\n");
		}
		
		if (a == b && b == c) {
			printf("TRIANGULO EQUILATERO\n");
		} else if (a == b || b == c || a == c) {
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	
	return 0;
	
}
