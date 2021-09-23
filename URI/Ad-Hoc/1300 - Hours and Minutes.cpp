#include <iostream>
#include <algorithm>
using namespace std;

int A[181], n;

int getAngleBetweenClockPointers(int h, int m) {
	int marks;
	int angles;
	
	marks  = m > h ? m-h : h-m;
	marks %= 60;
	
	angles = (marks * 6) % 360;
	if (angles > 180) {
		angles = 360 - angles;
	}
	
	return angles;
}

void fillAngles() {
	int m = 0, h = 0, ang;
	
	while (h < 12) {
		ang = getAngleBetweenClockPointers(h, m);

		A[ang]++;
		
		// Next minute
		m = (m + 1) % 60;
		if (m > 0 && m%12 == 0) {
			h++;
		}
	}
}

int main () {

	fillAngles();
	
	while (cin >> n) {
		cout << (A[n] ? "Y" : "N") << endl;
	}
	
	return 0;
	
}
