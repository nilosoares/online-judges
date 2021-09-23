#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int n, leftFoot[61], rightFoot[61], foot, counter;
char leftOrRight;

int main () {

	while (scanf("%d", &n) != EOF) {
		memset(leftFoot, 0, sizeof(int) * 61);
		memset(rightFoot, 0, sizeof(int) * 61);
		
		while (n--) {
			scanf("%d %c", &foot, &leftOrRight);
			
			if (leftOrRight == 'E') {
				leftFoot[foot]++;
			} else {
				rightFoot[foot]++;
			}
		}
		
		counter = 0;
		for (int i = 30; i <= 60; i++) {
			counter += min(leftFoot[i], rightFoot[i]);
		}
		
		printf("%d\n", counter);
	}

	return 0;
	
}
