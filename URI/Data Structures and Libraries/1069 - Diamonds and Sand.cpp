#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int t, sLength, nbDiamonds;
string s;
stack<char> diamondStack;

int main () {

	cin >> t;
	
	while (t--) {
		nbDiamonds = 0;
		stack<char> emptyStack;
		swap(diamondStack, emptyStack);
		
		cin >> s;
		
		sLength = s.length();
		for (int i = 0; i < sLength; i++) {
			if (s[i] == '<') {
				diamondStack.push('<');
			} else if (s[i] == '>' && diamondStack.size() > 0) {
				nbDiamonds++;
				diamondStack.pop();
			}
		}
		
		cout << nbDiamonds << endl;
	}

	return 0;
	
}
