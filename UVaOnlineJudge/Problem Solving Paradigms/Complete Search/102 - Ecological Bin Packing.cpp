#include <cstdio>
#include <string>
#include <limits>
using namespace std;

typedef struct {
	int b, g, c;
} BIN;

BIN bin1, bin2, bin3;
int curNbMovements;
int minNbMovements;
string binColors;

int input () {
	return scanf(
		"%d %d %d %d %d %d %d %d %d",
		&bin1.b,
		&bin1.g,
		&bin1.c,
		&bin2.b,
		&bin2.g,
		&bin2.c,
		&bin3.b,
		&bin3.g,
		&bin3.c
	);
}

int main () {
	
	while (input() == 9) {
		minNbMovements = numeric_limits<int>::max();
		
		// BCG
		curNbMovements = (
			bin2.b + bin3.b +
			bin1.c + bin3.c +
			bin1.g + bin2.g
		);
		if (curNbMovements < minNbMovements) {
			minNbMovements = curNbMovements;
			binColors = "BCG";
		}
		
		// BGC
		curNbMovements = (
			bin2.b + bin3.b +
			bin1.g + bin3.g +
			bin1.c + bin2.c
		);
		if (curNbMovements < minNbMovements) {
			minNbMovements = curNbMovements;
			binColors = "BGC";
		}
		
		// CBG
		curNbMovements = (
			bin2.c + bin3.c +
			bin1.b + bin3.b +
			bin1.g + bin2.g
		);
		if (curNbMovements < minNbMovements) {
			minNbMovements = curNbMovements;
			binColors = "CBG";
		}
		
		// CGB
		curNbMovements = (
			bin2.c + bin3.c +
			bin1.g + bin3.g +
			bin1.b + bin2.b
		);
		if (curNbMovements < minNbMovements) {
			minNbMovements = curNbMovements;
			binColors = "CGB";
		}
		
		// GBC
		curNbMovements = (
			bin2.g + bin3.g +
			bin1.b + bin3.b +
			bin1.c + bin2.c
		);
		if (curNbMovements < minNbMovements) {
			minNbMovements = curNbMovements;
			binColors = "GBC";
		}
		
		// GCB
		curNbMovements = (
			bin2.g + bin3.g +
			bin1.c + bin3.c +
			bin1.b + bin2.b
		);
		if (curNbMovements < minNbMovements) {
			minNbMovements = curNbMovements;
			binColors = "GCB";
		}
		
		printf("%s %d\n", binColors.c_str(), minNbMovements);
	}

	return 0;

}
