#include <iostream>
#include <algorithm>
#include <vector>
#define N 100000
using namespace std;

int n;
vector< int > v;

bool compare(int p, int q) {
	if (p % 2 == 0 && q % 2 == 1) {
		return true;
	} else if (p % 2 == 1 && q % 2 == 0) {
		return false;
	} else if (p % 2 == 0 && q % 2 == 0 && p < q) {
		return true;
	} else if (p % 2 == 1 && q % 2 == 1 && p > q) {
		return true;
	}
	return false;
}

int main () {

	cin >> n;
	
	v.resize(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	sort(v.begin(), v.end(), compare);
	
	for (int i = 0; i < n; i++) {
		cout << v[i] << endl;
	}

	return 0;
	
}
