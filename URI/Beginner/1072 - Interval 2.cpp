#include <cstdio>
using namespace std;

int n, x, in, out;

int main () {

	scanf("%d", &n);
	
	in = out = 0;
	
	while (n--) {
		scanf("%d", &x);
		
		if (x >= 10 && x <= 20) {
			in++;
		} else {
			out++;
		}
	}
	
	printf("%d in\n%d out\n", in, out);

	return 0;
	
}
