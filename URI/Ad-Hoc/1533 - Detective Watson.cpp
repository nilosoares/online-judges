#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct {
	int id, level;
} SUSPECT;

SUSPECT s, s1, s2;
int n;

int main () {

	while (scanf("%d", &n), n) {
		s1.id = s1.level = 0;
		s2.id = s2.level = 0;
		
		for (int i = 1; i <= n; i++) {
			s.id = i;
			scanf("%d", &s.level);
			
			if (s.level > s1.level) {
				swap(s1, s2);
				swap(s1, s);
			} else if (s.level > s2.level) {
				swap(s2, s);
			}
		}
		
		printf("%d\n", s2.id);
	}

	return 0;
	
}
