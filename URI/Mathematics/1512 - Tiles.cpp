#include <cstdio>
using namespace std;

int n, a, b;

int GCD(int a, int b) {
	return (b == 0) ? a : GCD(b, a % b);
}

int LCM(int a, int b) {
	return (a * b) / GCD(a, b);
}

int main () {

	while (true) {
		scanf("%d %d %d", &n, &a, &b);
		if (!(n && a && b)) {
			break;
		}
		
		printf("%d\n", (n/a) + (n/b) - (n/LCM(a, b)));
	}

	return 0;

}
