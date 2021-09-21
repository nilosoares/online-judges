#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int w, h, r1, r2;
int Dmin, Dmax;

main () {

	while (cin >> w >> h >> r1 >> r2) {
		if (!(w && h && r1 && r2)) {
			break;
		}
		
		// if the greater one does not fit in the rectangle...
		if (min(w, h) < 2 * max(r1, r2)) {
			cout << "N" << endl; // not possible
			continue;
		}
		
		// min and max distance between the center of cylinders
		// when they are inside the rectangle
		Dmin = (r1+r2) * (r1+r2);
		Dmax = ((h-r1-r2)*(h-r1-r2)) + ((w-r1-r2)*(w-r1-r2));

		// if the min distance is greater than the max distance...
		if (Dmin > Dmax) {
			cout << "N" << endl; // not possible
		} else {
			cout << "S" << endl;
		}
	}
	
	return 0;

}
