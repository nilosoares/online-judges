#include <iostream>
#include <map>
using namespace std;

int n, m;
map<int, int> numbers;
map<int, int>::iterator it;

int main () {
	
	cin >> n;
	
	while (n--) {
		cin >> m;
		numbers[m]++;
	}
	
	for (it = numbers.begin(); it != numbers.end(); it++) {
		cout << it->first << " aparece " << it->second << " vez(es)" << endl;
	}

	return 0;
	
}
