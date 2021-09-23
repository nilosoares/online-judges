#include <iostream>
using namespace std;

int n, m, goals;
int scored, output;

int main () {
	
	cin >> n >> m;
	
	output = 0;
	
	for (int i = 1; i <= n; i++) {
		scored = 0;
		
		for (int j = 1; j <= m; j++) {
			cin >> goals;
			
			if (goals > 0) {
				scored++;
			}
		}
		
		if (scored == m) {
			output++;
		}
	}
	
	cout << output << endl;
		
	return 0;
	
}
