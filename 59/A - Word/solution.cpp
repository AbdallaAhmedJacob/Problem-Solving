#include <iostream>
#include <string>
 
using namespace std;
 
bool isUpper(char c) {
	return (c >= 'A' && c <= 'Z');
}
int main()
{
	// 59A
	short countUppercase = 0;
	short l = 'a' - 'A';
	string s;
	cin >> s;
	for (short i = 0; i < s.length(); ++i) {
		if (isUpper(s[i])) {
			++countUppercase;
		}
	}
	if (countUppercase > (s.length() / 2)) {
		for (short i = 0; i < s.length(); ++i) {
			if (!isUpper(s[i])) {
				s[i] = s[i] - l;// to upper
			}
		}
	}
	else {
		for (short i = 0; i < s.length(); ++i) {
			if (isUpper(s[i])) {
				s[i] = s[i] + l;// to lower
			}
		}
	}
	cout << s;
	return 0;
}