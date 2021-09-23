#include <cstdio>
#include <cstdlib>
using namespace std;

int t, quantity, ns, guess, bestGuess, winner;

int main () {

	scanf("%d",  &t);
	
	while (t--) {
		scanf("%d %d", &quantity, &ns);
		
		bestGuess = 1024;
		
		for (int i = 1; i <= quantity; i++) {
			scanf("%d", &guess);
			
			if (abs(guess-ns) < bestGuess) {
				bestGuess = abs(guess-ns);
				winner = i;
			}
		}
		
		printf("%d\n", winner);
	}

	return 0;
	
}
