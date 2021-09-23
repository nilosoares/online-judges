#include <iostream>
#include <algorithm>
using namespace std;

typedef struct {
	int id, damage, time;
	string name;
} JOGADOR;

int t;
JOGADOR p, s;
int monster;

void input() {
	// andre
	p.id = 1;
	p.name = "Andre";
	cin >> p.damage >> p.time;
	
	// beto
	s.id = 2;
	s.name = "Beto";
	cin >> s.damage >> s.time;
	
	// monster
	cin >> monster;
}

void fight() {
	// first attack: andre
	monster -= p.damage;
	if (monster <= 0) {
		cout << p.name << endl;
		return;
	}
	
	// second: beto
	monster -= s.damage;
	if (monster <= 0) {
		cout << s.name << endl;
		return;
	}
	
	// check who is faster
	if (s.time < p.time) {
		swap(p, s);
	}
	
	// more attacks
	int i = p.time;
	int j = s.time;
	while (monster > 0) {
		// first 
		while (i < j) {
			monster -= p.damage;
			if (monster <= 0) {
				cout << p.name << endl;
				return;
			}
			i += p.time;
		}
		
		// together
		if (i == j && p.id == 1) {
			monster -= p.damage;
			if (monster <= 0) {
				cout << p.name << endl;
				return;
			}
			i += p.time;
		}
		
		// second attack
		monster -= s.damage;
		if (monster <= 0) {
			cout << s.name << endl;
			return;
		}
		j += s.time;
	}
}

int main () {

	cin >> t;
	
	while (t--) {
		input();
		fight();
	}
	
	return 0;
	
}
