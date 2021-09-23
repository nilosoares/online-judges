#include <cstdio>
using namespace std;

typedef struct {
	int points;
	int goalsAgainst;
	int goalDiff;
} TEAM;

int t;
TEAM a, b;

void readGame(TEAM &m, TEAM &v) {
	int goalsM, goalsV;
	
	scanf("%d x %d", &goalsM, &goalsV);
	
	// points
	if (goalsM > goalsV) {
		m.points += 3;
	} else if (goalsV > goalsM) {
		v.points += 3;
	} else {
		m.points += 1;
		v.points += 1;
	}
	
	// goal diff
	m.goalDiff += goalsM - goalsV;
	v.goalDiff += goalsV - goalsM;
	
	// goals against
	v.goalsAgainst += goalsV;
}

int main () {

	scanf("%d", &t);
	
	while (t--) {
		// reset variables
		a.points = b.points = 0;
		a.goalDiff = b.goalDiff = 0;
		a.goalsAgainst = b.goalsAgainst = 0;
		
		// input & process
		readGame(a, b);
		readGame(b, a);
		
		// output
		if (a.points > b.points) {
			printf("Time 1\n");
		} else if (b.points > a.points) {
			printf("Time 2\n");
		} else if (a.goalDiff > b.goalDiff){
			printf("Time 1\n");
		} else if (b.goalDiff > a.goalDiff){
			printf("Time 2\n");
		} else if (a.goalsAgainst > b.goalsAgainst) {
			printf("Time 1\n");
		} else if (b.goalsAgainst > a.goalsAgainst) {
			printf("Time 2\n");
		} else {
			printf("Penaltis\n");
		}
	}

	return 0;
	
}
