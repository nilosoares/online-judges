#include <iostream>
#include <string>
using namespace std;

int ddd;

string getCity(int ddd) {
	string s;
	
	switch (ddd) {
		case 61: s = "Brasilia"; break;
		case 71: s = "Salvador"; break;
		case 11: s = "Sao Paulo"; break;
		case 21: s = "Rio de Janeiro"; break;
		case 32: s = "Juiz de Fora"; break;
		case 19: s = "Campinas"; break;
		case 27: s = "Vitoria"; break;
		case 31: s = "Belo Horizonte"; break;
		default: s = "DDD nao cadastrado"; break;
	}
	
	return s;
}

int main () {

	cin >> ddd;
	cout << cidade(ddd) << endl;

	return 0;
	
}
