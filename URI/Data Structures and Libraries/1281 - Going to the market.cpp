#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;

int t;
double cartPrice;
map<string, double> fruits;

void resetVars () {
	map<string, double> empty;
	swap(fruits, empty);
	
	cartPrice = 0.00;
}

void readPrices() {
	int n;
	string product;
	double price;
	
	cin >> n;
	
	while (n--) {
		cin >> product >> price;
		
		fruits[product] = price;
	}
}

void readAmount() {
	int n, amount;
	string product;
	
	cin >> n;
	
	while (n--) {
		cin >> product >> amount;
		cartPrice += fruits[product] * amount;
	}
}

int main () {

	cout.setf(ios_base::fixed);
	cout.precision(2);

	cin >> t;
	while (t--) {
		resetVars();
		readPrices();
		readAmount();
		cout << "R$ " << cartPrice << endl;
	}

	return 0;
	
}
