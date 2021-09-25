#include <cstdio>
#include <map>
using namespace std;

int t, amount, total;
float pc, pr, ps;
char type;
map<char, int> totalPerAnimal;

int main () {

	// reseta variaveis
	total = 0;
	totalPerAnimal['R'] = 0;
	totalPerAnimal['S'] = 0;
	totalPerAnimal['C'] = 0;

	// entrada 1
	scanf("%d", &t);
	
	// entrada 2
	while (t--) {
		scanf("%d %c", &amount, &type);
		
		// conta cobaias
		total += amount;
		totalPerAnimal[type] += amount;
	}
	
	// calcula percentuais
	pc = 100.0 * totalPerAnimal['C'] / total;
	pr = 100.0 * totalPerAnimal['R'] / total;
	ps = 100.0 * totalPerAnimal['S'] / total;
	
	// saida
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", totalPerAnimal['C']);
	printf("Total de ratos: %d\n", totalPerAnimal['R']);
	printf("Total de sapos: %d\n", totalPerAnimal['S']);
	printf("Percentual de coelhos: %.2f %%\n", pc);
	printf("Percentual de ratos: %.2f %%\n", pr);
	printf("Percentual de sapos: %.2f %%\n", ps);

	return 0;
	
}
