#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

int t, n, p, iid;
string instrucao, same, as;
vector<int> instrucoes;

int main () {
	
	cin >> t;
	
	while (t--) {
		// input
		cin >> n;
		cin.ignore();
		
		// reset variables
		p = 0;
		instrucoes.assign(n+1, 0);
		
		for (int i = 1; i <= n; i++) {
			getline(cin, instrucao);
			
			if (instrucao == "LEFT") {
				instrucoes[i] = -1;
				p--;
			} else if (instrucao == "RIGHT") {
				instrucoes[i] = 1;
				p++;
			} else {
				istringstream iss(instrucao);
				iss >> same >> as >> iid; 
				instrucoes[i] = instrucoes[iid];
				p += instrucoes[iid];
			}
		}
		
		cout << p << endl;
	}
	
	return 0;
	
}
