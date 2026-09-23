#include <iostream>
#include <string>
 
using namespace std;
 
 
int main() {
	// 236A
 
	string s;
	cin >> s;
	short r = 0;
 
	for (short i = 0; i < s.length(); ++i) {
		for (short j = i + 1; j < s.length(); ++j) {
			if (s[i] == s[j]) {
				++r;
				break;
			} 
		}
	}
	if ((s.length() - r) % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	
	return 0;
}