#include <iostream>
using namespace std;

int width;
int nbPieces;
int area;
int w, l;

int main () {

	while (cin >> width) {
		cin >> nbPieces;
		
		area = 0;
		for (int i = 1; i <= nbPieces; i++) {
			cin >> w >> l;
			
			area += w * l;
		}
		
		cout << area / width << endl;
	}

	return 0;

}
