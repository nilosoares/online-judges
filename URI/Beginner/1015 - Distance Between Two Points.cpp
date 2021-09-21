#include <iostream>
#include <cmath>
using namespace std;

typedef struct {
	int x, y;
} POINT;

POINT p1, p2;

float euclideanDistance(POINT p1, POINT p2) {
	float x = p2.x - p1.x;
	float y = p2.y - p1.y;
	
	return sqrt( (x*x) + (y*y) );
}

int main () {

	cout.setf(ios_base::fixed);
	cout.precision(4);
	
	cin >> p1.x >> p1.y;
	cin >> p2.x >> p2.y;
	
	cout << euclideanDistance(p1, p2) << endl;

	return 0;

}
