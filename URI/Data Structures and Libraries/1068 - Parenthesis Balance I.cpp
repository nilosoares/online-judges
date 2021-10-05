#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

string s;
int sLength;
stack<int> parenthesisStack;

int main () {
	
	while (cin >> s) {
		sLength = s.length();
		
		stack<int> emptyStack;
		swap(parenthesisStack, emptyStack);
		
		for (int i = 0; i < sLength; i++) {
			if (s[i] == '(') {
				parenthesisStack.push(1);
			} else if (s[i] == ')') {
				if (parenthesisStack.empty()) {
					parenthesisStack.push(1);
					break;
				}
				
				parenthesisStack.pop();
			}
		}
		
		if (parenthesisStack.empty()) {
			cout << "correct" << endl;
		} else {
			cout << "incorrect" << endl;
		}
	}
	
	return 0;

}
