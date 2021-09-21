#include <iostream>
using namespace std;

int id, qtd;
float valor, total;

int main () {

	cout.setf(ios_base::fixed);
	cout.precision(2);

	total = 0.00;
	for (int i = 1; i <= 2; i++) {
		cin >> id >> qtd >> valor;
		total += qtd * valor;
	}
	
	cout << "VALOR A PAGAR: R$ " << total << endl;

	return 0;
	
}
