#include <iostream>
using namespace std;

int id, horasTrabalhadas;
float dolaresPorHora, salario;

int main () {

	cout.setf(ios_base::fixed);
	cout.precision(2);

	cin >> id >> horasTrabalhadas >> dolaresPorHora;

	salario = horasTrabalhadas * dolaresPorHora;
	
	cout << "NUMBER = " << id << endl;
	cout << "SALARY = U$ " << salario << endl;

	return 0;
	
}
