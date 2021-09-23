#include <cstdio>
#include <cmath>
using namespace std;

int t, output;
float n;

int main () {

	scanf("%d", &t);
	
	while (t--) {
		scanf("%f", &n);
		
		n = log2(n);
		output = ceil(n);
		
		printf("%d dias\n", output);
	}

	return 0;
	
}
