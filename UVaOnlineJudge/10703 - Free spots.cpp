#include <cstdio>
#include <cstring>
#include <algorithm>
#define W_MAX 501
#define H_MAX 501
using namespace std;

int w, h, n;
int x1, x2, y1, y2;
int board[W_MAX][H_MAX];
int i, j;
int empty_spots;

int main () {
	
	while (true) {
		// Input
		scanf("%d %d %d", &w, &h, &n);
		if (w == 0 && h == 0 && n == 0) {
			break;
		}
		
		// Reset variables
		memset(board, 0, sizeof board);
		
		// Processing
		empty_spots = w * h;
		while (n--) {
			scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
			
			if (x1 > x2) {
				swap(x1, x2);
			}
			if (y1 > y2) {
				swap(y1, y2);
			}
			
			for (int i = x1; i <= x2; i++) {
				for (int j = y1; j <= y2; j++) {
					if (board[i][j] == 0) {
						board[i][j] = 1;
						empty_spots--;
					}
				}
			}
		}
		
		// Output
		if (empty_spots == 0) {
			printf("There is no empty spots.\n");
		} else if (empty_spots == 1) {
			printf("There is one empty spot.\n");
		} else {
			printf("There are %d empty spots.\n", empty_spots);
		}
	}
	
	return 0;
	
}
