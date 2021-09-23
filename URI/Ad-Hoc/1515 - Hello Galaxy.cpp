#include <iostream>
#include <string>
using namespace std;

int n, year, time, smallerYear, planetIdx;
string planets[101];

int main () {
	
	while (cin >> n, n) {
		smallerYear = 5000;
		
		for (int i = 1; i <= n; i++) {
			cin >> planets[i] >> year >> time;
			
			if (year-time < smallerYear) {
				smallerYear = year-time;
				planetIdx = i;
			}
		}
		
		cout << planets[planetIdx] << endl;
	}
	
	return 0;
	
}
