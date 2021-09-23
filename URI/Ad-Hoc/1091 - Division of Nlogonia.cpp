#include <iostream>
using namespace std;

int k, n, m, x, y;

bool border() {
	return (x == n || y == m);
}

bool north() {
	return (y > m);
}

bool south() {
	return (y < m);
}

bool east() {
	return (x > n);
}

bool west() {
	return (x < n);
}

bool northEast() {
	return (north() && east());
}

bool northWest() {
	return (north() && west());
}

bool southeast() {
	return (south() && east());
}

bool southWest() {
	return (south() && west());
}

int main () {

	while (cin >> k, k) {
		cin >> n >> m;
		
		while (k--) {
			cin >> x >> y;
			
			if (border()) {
				cout << "divisa" << endl;
			} else if (northEast()) {
				cout << "NE" << endl;
			} else if (northWest()) {
				cout << "NO" << endl;
			} else if (southeast()) {
				cout << "SE" << endl;
			} else if (southWest()) {
				cout << "SO" << endl;
			}
		}
	}

	return 0;

}
