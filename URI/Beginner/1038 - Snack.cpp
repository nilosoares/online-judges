#include <cstdio>
using namespace std;

int id, quantity;

float getPrice (int id) {
	switch (id) {
		case 1: return 4.00;
		case 2: return 4.50;
		case 3: return 5.00;
		case 4: return 2.00;
		case 5: return 1.50;
	}
	
	return 0.00;
}

int main () {

	scanf("%d %d", &id, &quantity);
	
	printf("Total: R$ %.2f\n", quantity * getPrice(id));

	return 0;

}
