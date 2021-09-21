#include <cstdio>
#include <vector>
#include <algorithm>
#define INF 1000000000
using namespace std;

typedef vector<int> vi;

int t, amount, nbIngredients, nbCakes;
int ingredient, quantity, cost, _min;
vi ingredients;

int main () {
	
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d", &amount, &nbIngredients, &nbCakes);
		
		ingredients.assign(nbIngredients, 0);
		for (int i = 0; i < nbIngredients; i++) {
			scanf("%d", &ingredients[i]);
		}
		
		_min = INF;
		for (int i = 1; i <= nbCakes; i++) {
			cost = 0;
			
			scanf("%d", &nbIngredients);
			for (int j = 1; j <= nbIngredients; j++) {
				scanf("%d %d", &ingredient, &quantity);
				cost += ingredients[ingredient] * quantity;
			}
			
			_min = min(_min, cost);
		}
		
		printf("%d\n", amount / _min);
	}

	return 0;
	
}
