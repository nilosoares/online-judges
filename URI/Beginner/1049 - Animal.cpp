#include <iostream>
#include <cstring>
using namespace std;

string n1, n2, n3;

int main () {

	cin >> n1 >> n2 >> n3;

	if (n1 == "vertebrado") {
		if (n2 == "ave") {
			if (n3 == "carnivoro") {
				cout << "aguia" << endl;
			} else if (n3 == "onivoro") {
				cout << "pomba" << endl;
			}
		} else if (n2 == "mamifero") {
			if (n3 == "onivoro") {
				cout << "homem" << endl;
			} else if (n3 == "herbivoro") {
				cout << "vaca" << endl;
			}
		}
	} else if (n1 == "invertebrado") {
		if (n2 == "inseto") {
			if (n3 == "hematofago") {
				cout << "pulga" << endl;
			} else if (n3 == "herbivoro") {
				cout << "lagarta" << endl;
			}
		} else if (n2 == "anelideo") {
			if (n3 == "hematofago") {
				cout << "sanguessuga" << endl;
			} else if (n3 == "onivoro") {
				cout << "minhoca" << endl;
			}
		}
	}

	return 0;
	
}
