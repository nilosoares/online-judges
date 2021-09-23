#include <cstdio>
#include <cmath>
using namespace std;

int t, squares;
long long int grains, grams, kilos;

void updateValues() {
	grains *= 2;
	grams *= 2;
	kilos *= 2;
	
	grams += grains / 12;
	grains %= 12;
	
	kilos += grams / 1000;
	grams %= 1000;
}

int main () {

	scanf("%d", &t);
	
	while (t--) {
		// input
		scanf("%d", &squares);
		
		// process
		grains = 1;
		grams = 0;
		kilos = 0;
		for (int i = 1; i <= squares; i++) {
			updateValues();
		}
		
		// output
		printf("%lld kg\n", kilos);
	}

	return 0;
	
}
