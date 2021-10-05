#include <cstdio>
#include <queue>
#include <deque>
#include <algorithm>
#define DISCART 1
#define MOVE 2
using namespace std;

int n, action, card;
deque<int> cards;
queue<int> discarted;

int main() {

	while (scanf("%d", &n), n) {
		for (int i = n; i >= 1; i--) {
			cards.push_back(i);
		}
		
		action = DISCART;
		while (cards.size() > 1) {
			if (action == DISCART) {
				discarted.push(cards.back());
				cards.pop_back();
				action = MOVE;
			} else if (action == MOVE) {
				cards.push_front(cards.back());
				cards.pop_back();
				action = DISCART;
			}
		}
		
		printf("Discarded cards:");
		while (discarted.size()) {
			printf(" %d", discarted.front());
			discarted.pop();
			if (discarted.size()) {
				printf(",");
			}
		}
		printf("\nRemaining card: %d\n", cards.back());
		cards.pop_back();
	}

	return 0;
	
}
