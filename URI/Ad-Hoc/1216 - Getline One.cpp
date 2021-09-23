#include <iostream>
using namespace std;

string name;
int nbFriends;
double d, total;

int main () {
	
	cout.setf(ios_base::fixed);
    cout.precision(1);
	
	total = 0.0;
	nbFriends = 0;
	
	while (getline(cin, name)) {
		cin >> d;
		cin.ignore();
		
		total += d;
		
		nbFriends++;
	}
	
	cout << total / nbFriends << endl;
	
	return 0;
	
}
