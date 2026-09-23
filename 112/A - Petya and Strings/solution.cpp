// 112A
#include <iostream>
#include <string>
using namespace std;
 
void ToUpper(char& c) {
	if(c >= 'A' && c <= 'Z')return;
	c -= 'a' - 'A';
}
 
int main() {
 
	string s1, s2;
	cin >> s1 >> s2;
 
	for (short i = 0; i < s1.length(); ++i) {
		ToUpper(s1[i]);
		ToUpper(s2[i]);
	}
	if (s1 == s2) cout << 0;
	else if (s1 < s2)cout << -1;
	else cout << 1;
 
	return 0;
}