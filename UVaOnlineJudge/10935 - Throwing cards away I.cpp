#include <cstdio>
#include <deque>
using namespace std;

int n;
deque<int> cards;

void buildDeque() {
	cards.clear();
	
	for (int i = n; i >= 1; i--) {
		cards.push_front(i);
	}
}

void discardCards() {
	printf("Discarded cards:");
	
	int cardsSize = cards.size();
	
	while (cardsSize > 1) {
		// throw away the top card
		printf(" %d", cards.front());
		cards.pop_front();
		cardsSize--;
		
		// move the top card to the bottom of the deck
		cards.push_back(cards.front());
		cards.pop_front();
		
		if (cardsSize > 1) {
			printf(",");
		}
	}

	printf("\n");
}

void remainingCard() {
	printf("Remaining card: %d\n", cards.front());
	cards.pop_front();
}

int main () {
	
	while (true) {
		scanf("%d", &n);
		
		if (n == 0) {
			break;
		}
		
		buildDeque();
		discardCards();
		remainingCard();
	}
	
	return 0;
	
}
